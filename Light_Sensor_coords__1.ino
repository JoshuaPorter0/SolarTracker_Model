float A;
float B;
float C;
float D;

#include <Servo.h>
#define TOP_SERVO_PIN 3
#define BOTTOM_SERVO_PIN 4

Servo TopServo;
Servo BottomServo;


float XPosition(){
  A = analogRead(A0);
  B = analogRead(A1);
  C = analogRead(A2);
  D = analogRead(A3);
  return(B+D-(A+C))/(A+B+C+D);
}
float YPosition(){
  A = analogRead(A0);
  B = analogRead(A1);
  C = analogRead(A2);
  D = analogRead(A3);
  return(A + B -(D + C))/(A + B + C + D);
}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  TopServo.attach(TOP_SERVO_PIN);
  TopServo.write(90);
  BottomServo.attach(BOTTOM_SERVO_PIN);
  BottomServo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  int xPos = 100*(XPosition());
  int yPos = 100*(YPosition());
  
  Serial.print("xpos:");
  Serial.print(xPos);
  Serial.print('\n');
  Serial.print("ypos:");
  Serial.print(yPos);
  Serial.print('\n');
  delay(500);

  if (xPos)


  if(yPos > 90) {
    yPos = 90;
  } else if (yPos < 0); 
  {
    yPos = 0;
  }
  if (xPos > 180) {
    xPos = 180;
  } else if (xPos < 0)
  {
    xPos = 0;
  }




  // Serial.print("A is:"); //for debugging raw sensor data
  // Serial.print(A);
  // Serial.print('\n');

  // Serial.print("B is:");
  // Serial.print(B);
  // Serial.print('\n');

  // Serial.print("C is:");
  // Serial.print(C);
  // Serial.print('\n');

  // Serial.print("D is:");
  // Serial.print(D);
  // Serial.print('\n');

  // delay(500);
}

