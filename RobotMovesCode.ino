#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
int min = 480;
int max = 2500;


void setup()
{
  //arm 1
  servo1.attach(7,min,max);
  servo2.attach(6,min,max);
  servo3.attach(5,min,max);
  
  //arm 2
  servo4.attach(4,min,max);
  servo5.attach(3,min,max);
  servo6.attach(2,min,max);
}
void loop()
{
  //move 1 (Carrying)
  servo1.write(0); // Shoulder 1 
  servo2.write(90); //Elbow 1
  servo3.write(0); //Hand 1
  servo4.write(0); // Shoulder 2 
  servo5.write(90); //Elbow 2
  servo6.write(0);//Hand 2
  delay(2000);
  
  servo2.write(0); // back to default postion  
  servo5.write(0); // back to default postion
  delay(5000);
 // exit(0);
  
  //move 2 (Happy)
  servo1.write(180); // Shoulder 1 
  servo2.write(0); //Elbow 1
  servo3.write(0); //Hand 1
  servo4.write(180); // Shoulder 2 
  servo5.write(0); //Elbow 2
  servo6.write(0);//Hand 2
  delay(2000);
  
  // back to default postion  
  servo1.write(0); // back to default postion  
  servo4.write(0); // back to default postion
  delay(5000);
  //exit(0);
  
  //move 3 (Hug)
  servo1.write(90); // Shoulder 1 
  servo2.write(0); //Elbow 1
  servo3.write(90); //Hand 1
  servo4.write(90); // Shoulder 2 
  servo5.write(0); //Elbow 2
  servo6.write(90);//Hand 2
  delay(2000);
  
  // back to default postion  
  servo1.write(0); // back to default postion  
  servo3.write(0); // back to default postion
  servo4.write(0); // back to default postion
  servo6.write(0); // back to default postion
  delay(5000);
  exit(0);
  
  




}