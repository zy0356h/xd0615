#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7
void setup()
{
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片选1
  pinMode(S2, OUTPUT);//片选2
  pinMode(S3, OUTPUT);//片选3
  pinMode(S4, OUTPUT);//片选4
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
}
int i=0,j=8;
byte income[100]={0};

void loop()
{
  if(Serial.available()>0)
  {
     for(i=0;;i++)
     {
   	   income[i]=Serial.read();
       for(;income[i]==207||income[i]==255;)
         income[i]=Serial.read();
       Serial.println(income[i]);
       income[i]=income[i]-'0';      
       digitalWrite(j,LOW);
       digitalWrite(2,income[i]&0x1);
       digitalWrite(3,(income[i]>>1)&0x1);
       digitalWrite(4,(income[i]>>2)&0x1);
       digitalWrite(5,(income[i]>>3)&0x1);
       digitalWrite(j,HIGH);
       j=j+1;
       if(j==12)j=8;
       delay(1000);
    }
  }
}
