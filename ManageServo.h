#ifndef ManageServo_h
#define ManageServo_h
#include "Arduino.h"

class ManageServo
{

public:
 void Attach(int pin, Servo servo);
 void Detach(Servo servo);

private:

};

#endif
