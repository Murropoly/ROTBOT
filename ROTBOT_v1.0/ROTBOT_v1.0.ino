/*
   RotBot v1.0
   Sample code/Reference
   Made by Tyler Muranaka
*/

//Motor controller pins setup
// Left Motor
int enA = 10;
int in1 = 9;
int in2 = 8;
// Right Motor
int enB = 5;
int in3 = 7;
int in4 = 6;

void setup() {
  // set the motor controller pins to output
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Call this class "Forward" to make the robot go Forward
  class Forward {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(enA, 200); //Set Speed 0-255
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enb, 200); //Set Speed 0-255
  }
  // Call this class "Reverse" to make the robot go in Reverse
  class Reverse {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      analogWrite(enA, 200); //Set Speed 0-255
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      analogWrite(enb, 200); //Set Speed 0-255
  }
  // Call this class "Right" to make the robot go in Right
  class Right {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(enA, 200); //Set Speed 0-255
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      analogWrite(enA, 200); //Set Speed 0-255
  }
  // Call this class "Left" to make the robot go in Left
  class Left {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      analogWrite(enA, 200); //Set Speed 0-255
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enA, 200); //Set Speed 0-255
  }

}

void loop() {

}
