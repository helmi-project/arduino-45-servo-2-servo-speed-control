/*
   TUTORIAL SERVO PADA ARDUINO
   MENGGERAKKAN SERVO DENGAN KECEPATAN

   Pinout  :
   Kabel coklat servo -> GND
   Kabel coklat merah -> VCC
   Kabel coklat kuning -> SDA (atau A4)


*/

#include <Servo.h>
int servoPin = A4;
int angle = 10;

Servo servo;

int servoAngle = 0;

void setup() {
  Serial.begin(115200); //memulai komunikasi serial pada baud rate 115200
  delay(100);
  Serial.println("Menggerakkan servo pada Arduino");
  servo.attach(servoPin);
  servo.write(angle);


}

void loop() {
 // scan from 0 to 180 degrees
  for(angle = 10; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 10; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
}
