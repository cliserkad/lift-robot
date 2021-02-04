/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Bryan Johnson                                             */
/*    Created:      Thu Oct 24 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// arm                  motor         8               
// claw                 motor         3               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

const int DEGREES_90 = 90;
const int ARENA_HEIGHT = 88;
const int ARENA_WIDTH = 70;
const int START_Y = ARENA_HEIGHT / 2;
const int START_X = ARENA_WIDTH / 2;

void craneReset();

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  craneReset();

  Drivetrain.driveFor(ARENA_HEIGHT - START_Y, inches);
  Drivetrain.turnFor(DEGREES_90, degrees);
  Drivetrain.driveFor(ARENA_WIDTH / 2, inches);
  
}

void craneReset() {
  
}
