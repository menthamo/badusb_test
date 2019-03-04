/*
 2019/3/3
 在cmd中显示hello，there！
 */


#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(3000);
  Keyboard.releaseAll();//先释放全部按键，防止因为不同系统设置与软件占用按键
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("cmd");
  delay(500);
  Keyboard.print("hello,there!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
