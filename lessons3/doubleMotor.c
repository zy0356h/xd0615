char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.println("I am ready!");
}

/*
预定
'w':表示前进
's':表示后退
'a':表示右转
'd':表示左转
'e':表示停止
*/
void loop()
{
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
    case 'w':
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
    case 's':
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(7,LOW);
      digitalWrite(9,LOW);
      break;
    case 'a':
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
    case 'd':
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      break;
    case 'e':
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
    default:
      break;
    }
  }
}