#include <MsTimer2.h>     //定时器库的头文件
int tick = 0; //计数值
int state=0;
//中断服务程序
void myfunc()
{
  tick+=1;
  if(tick==10)
    tick=0;
  digitalWrite(8,tick&0x1);
  digitalWrite(9,(tick>>1)&0x1);
  digitalWrite(10,(tick>>2)&0x1);
  digitalWrite(11,(tick>>3)&0x1);
}
 
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  MsTimer2::set(1000, myfunc); //设置中断，每1000ms进入一次中断服务程序 
  MsTimer2::start(); //开始计时
  
}
 
void loop()
{
  
}