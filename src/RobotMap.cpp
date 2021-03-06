// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANJaguar* RobotMap::driveCANRight = NULL;
CANJaguar* RobotMap::driveCANLeft = NULL;
RobotDrive* RobotMap::driveRobotDrive2 = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveCANRight = new CANJaguar(3);
	
	
	driveCANLeft = new CANJaguar(2);
	
	
	driveRobotDrive2 = new RobotDrive(driveCANLeft, driveCANRight);
	
	driveRobotDrive2->SetSafetyEnabled(true);
        driveRobotDrive2->SetExpiration(0.1);
        driveRobotDrive2->SetSensitivity(0.5);
        driveRobotDrive2->SetMaxOutput(1.0);
        


	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
