#include <Servo.h>
Servo flag; //生成伺服馬達物件
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);  //磁簧管輸入（上拉）
  flag.attach(3); //指定伺服馬達輸出
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2))
  flag.write(90); //無磁力時舉起旗子
  else
  flag.write(0);  //否則放下旗子
}
