
#include <Servo.h>
#include <Arduino.h>

#include "DrawCircle.h"

struct Coordinates
{
  int x;
  int y;
};

void DrowCircle()
{
  Coordinates coord = { 0, 0};
}

void move_center(Servo s1, Servo s2)
{
   s1.write(90);
   s2.write(90);
}

Coordinates next_move(int x)
{
   coord.x = (int)(radius * (cos((x * 3.14159F)/180.0F)) + 90.0F);
   coord.y = (int)(radius * (sin((x * 3.14159F)/180.0F)) + 90.0F);

   return coord;
}


void move_circle(float radius, int cDelay, Servo s1, Servo s2 )
{
        
  if(radius > 50.0F)
    radius = 50.0F;

  if(cDelay > 500)
    cDelay = 500;
    
   Serial.print("Radius: ");
   Serial.print(radius,4);
   Serial.print(", Delay:");
   Serial.println(cDelay);
  
  for(int x=1; x < 360; x++)
    {
        //float x = (float)(radius * Math.Cos(angleInDegrees * Math.PI / 180F)) + origin.X;
        //float y = (float)(radius * Math.Sin(angleInDegrees * Math.PI / 180F)) + origin.Y;
        int cX,cY;
        cX = (int)(radius * (cos((x * 3.14159F)/180.0F)) + 90.0F);
        cY = (int)(radius * (sin((x * 3.14159F)/180.0F)) + 90.0F);
        s1.write(cX);
        s2.write(cY);
        
      /*  Serial.print("x = ");
        Serial.print(cX,4);
        Serial.print(";");
        Serial.println(cY,4);*/
        delay(cDelay);
    }
    
}
