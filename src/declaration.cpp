#include "main.h"

// Drivetrain
pros::Motor frontLeft(2, pros::E_MOTOR_GEARSET_18, true);
pros::Motor frontRight(3, pros::E_MOTOR_GEARSET_18, false);
pros::Motor backLeft(4, pros::E_MOTOR_GEARSET_18, true);
pros::Motor backRight(5, pros::E_MOTOR_GEARSET_18, false);

// Intake
pros::Motor intake(2, pros::E_MOTOR_GEARSET_18, true);

// Flywheel
pros::Motor flywheel(2, pros::E_MOTOR_GEARSET_18, true);

// Roller
pros::Motor roller(2, pros::E_MOTOR_GEARSET_18, true);

// Controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);