#ifndef Sweeper_h
#define Sweeper_h
#include <Servo.h>

class Sweeper
{
public: 
  Sweeper(int interval);
  void Attach(int pin);
  void Detach();
  void Update(Servo servo1, Servo servo2);
  void SetInterval(int Update);
 
private:
  Servo servo;              // the servo
  int pos;              // current servo position 
  int increment;        // increment to move for each interval
  unsigned long lastUpdate; // last update of position
  int  updateInterval;      // interval between updates

};

#endif

