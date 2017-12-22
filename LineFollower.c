#pragma config(Sensor, S1,     ,               sensorLightActive)
#pragma config(Sensor, S2,     ,               sensorCOLORFULL)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {
	int white = 62;
	int color = 42; // Blue
	int threshold = (white + color)/2;
	while(1) {
		if(SensorValue[S1] > threshold) {
			motor[motorB] = 0;
			motor[motorC] = 50;
		} else {
			motor[motorB] = 50;
			motor[motorC] = 0;
		}
	}
}
