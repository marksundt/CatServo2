#ifndef DrawCircle_h
#define DrawCircle_h
#include <Servo.h>

class DrawCircle
{
public: 
  DrawCircle();
  void move_center(Servo s1, Servo s2);
  void move_circle(float radius, int cDelay, Servo s1, Servo s2);
  Coordinates next_move(int x);
  
  struct Coordinates
{
  int x;
  int y;
};

private:

};

#endif

