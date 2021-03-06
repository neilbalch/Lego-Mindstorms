#pragma config(Motor,  motorA,          winch,         tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          truck,         tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          turntable,     tmotorNXT, PIDControl, encoder)
#pragma config(Sensor, S1,     HTIRR,               sensorI2CCustom)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "hitechnic-irrecv.h"

// Motor speed Multipliers
#define WINCH_MULT 0.5
#define TRUCK_MULT 1
#define TURNTABLE_MULT 1

task main() {
	sbyte _motA = 0;
  sbyte _motB = 0;
  sbyte _motC = 0;
  sbyte _motD = 0;
 	while(1) {
 		// Min: -100 Max: 100 Mid: 0
  	HTIRRreadChannel(HTIRR, 1, _motA, _motC);
  	HTIRRreadChannel(HTIRR, 2, _motB, _motD);
  	if(_motA != 0)
  		motor[motorA] = _motA * WINCH_MULT;
  	else
  		motor[motorA] = 0;
  	if(_motB != 0)
  		motor[motorB] = _motB * TRUCK_MULT;
  	else
  		motor[motorB] = 0;
  	if(_motC != 0)
  		motor[motorC] = _motC * TURNTABLE_MULT;
  	else
  		motor[motorC] = 0;
  }
}
