#include <Servo.h>
#include <Arduino.h>

#include "Sweeper.h"

  int pos;              // current servo position 
  int increment;        // increment to move for each interval
  int  updateInterval;      // interval between updates
  unsigned long lastUpdate; // last update of position
 
  Sweeper::Sweeper(int interval)
  {
    updateInterval = interval;
    increment = 1;
  }

  void Sweeper::SetInterval(int Update)
  {
    if(Update > 500)
        Update = 500;
        
    updateInterval = Update;
  }
  
  
  void Sweeper::Update(Servo servo1, Servo servo2)
  {
    if((millis() - lastUpdate) > updateInterval)  // time to update
    {
      lastUpdate = millis();
      pos += increment;
      servo.write(pos);
      Serial.println(pos);
      if ((pos >= 180) || (pos <= 0)) // end of sweep
      {
        // reverse direction
        increment = -increment;
      }
    }
  }


