#include <Servo.h>
#include "ManageServo.h"


void ManageServo::Attach(int pin, Servo servo)
  {
     servo.attach(pin);
  }
  
void ManageServo::Detach(Servo servo)
  {
    servo.detach();
  }
