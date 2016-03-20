#include <SimbleeForMobile.h>
#include "Sweeper.h"
/*
 * Copyright (c) 2015 RF Digital Corp. All Rights Reserved.
 *
 * The source code contained in this file and all intellectual property embodied in
 * or covering the source code is the property of RF Digital Corp. or its licensors.
 * Your right to use this source code and intellectual property is non-transferable,
 * non-sub licensable, revocable, and subject to terms and conditions of the
 * SIMBLEE SOFTWARE LICENSE AGREEMENT.
 * http://www.simblee.com/licenses/SimbleeSoftwareLicenseAgreement.txt
 *
 * THE SOURCE CODE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 *
 * This heading must NOT be removed from this file.
 */
Servo s1, s2;

Sweeper sweeper(200);

/*
 * Traditional Arduino setup routine
 * 
 * Initialize the SimbleeForMobile environment.
 */
void setup() {
  // put your setup code here, to run once:

  s1.attach(1);
  s2.attach(2);
  
  SimbleeForMobile.deviceName = "LaserCat";
  SimbleeForMobile.advertisementData = "Data";
  SimbleeForMobile.domain = "lasertoy.newtionian.com";
  // Begin Simblee UI
  SimbleeForMobile.begin();

}





/*
 * The traditional Arduino loop method
 * 
 * Enable SimbleeForMobile functionality by calling the process method
 * each time through the loop. This method must be called regularly for
 * functionality to work.
 */
void loop() {
  // put your main code here, to run repeatedly:
  // process must be called in the loop for Simblee UI
  SimbleeForMobile.process();  
  sweeper.Update(s1, s2);
}


/*
 * SimbleeForMobile UI callback requesting the user interface
 */
void ui()
{  
  SimbleeForMobile.beginScreen();

  //Create your own UI here!
  
  SimbleeForMobile.endScreen();
}





/*
 * SimbleeForMobile event callback method
 */
void ui_event(event_t &event)
{
  
}


