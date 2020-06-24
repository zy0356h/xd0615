

void setup() {
  Serial.begin(9600);//设置波特率
  pinMode(2, INPUT_PULLUP);
  //2管脚作为输入管脚bin并启用内部上拉电阻器。上拉电阻器在断路的时候，管脚变成高电平；当变成通路的时候，变为低电平来。
  pinMode(13, OUTPUT);
  //13管脚作为输出管脚，13管脚与L灯相连，输出高电平则灯亮，输出低电平则灯灭

}

void loop() {
  int sensorVal = digitalRead(2);
  //DigitalRead函数读取2管脚的电平状态，保存在sensorVal中
  Serial.println(sensorVal);//打印2管脚的电平状态
  
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}
//如果2管脚为高电平，设置13管脚为低电平；否则设置13管脚为高电平
//保存按钮按下，电路导通，2管脚为低电平，则设置13管脚为高电平，灯L亮
//没有按按钮，电路中断，2管脚为高，设置13管脚为低电平，灯L灭