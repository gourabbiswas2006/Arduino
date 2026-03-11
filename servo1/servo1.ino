#include <Servo.h>
Servo myproj;
void setup() {
  // put your setup code here, to run once:
  myproj.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  myproj.write(0);
  delay(1000);
  myproj.write(180);
  delay(1000);

}
