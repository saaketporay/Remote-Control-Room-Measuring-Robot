/* TI-RSLK MAX Example 1 */
/* Robot will drive forward until it hits an object with bump switches */

#include "Energia.h"

/* Defines motor functions of robot */
#include "Romi_Motor_Power.h"

/* Defines pin configuration of robot */
#include "RSLK_MAX_Pins.h"

Romi_Motor_Power left_motor;
Romi_Motor_Power right_motor;

#define LEFT_BTN         73 // LaunchPad S1 pin number or can use LP_S1_PIN
#define RIGHT_BTN        74 // LaunchPad S2 pin number or can use LP_S2_PIN

// TIP: Use the Energia pin maps to find out what capabilities are attached to the LaunchPad
//      The pin maps show the functions on each pin and the pin number and names used in Energia 

int rc2;
int rc4;

/* The setup() funtion runs one time at the beginning of the Energia program */
void setup() {
	/* Set serial communication to 115200 baud rate for MSP432 */
	Serial.begin(115200);
	delay(500);

	/* Initialize motor object pins */
	left_motor.begin(MOTOR_L_SLP_PIN,
					 MOTOR_L_DIR_PIN,
					 MOTOR_L_PWM_PIN);

	right_motor.begin(MOTOR_R_SLP_PIN,
					  MOTOR_R_DIR_PIN,
					  MOTOR_R_PWM_PIN);

	/* Set bump switches to inputs */
	pinMode(BP_SW_PIN_0,INPUT_PULLUP);
	pinMode(BP_SW_PIN_1,INPUT_PULLUP);
	pinMode(BP_SW_PIN_2,INPUT_PULLUP);
	pinMode(BP_SW_PIN_3,INPUT_PULLUP);
	pinMode(BP_SW_PIN_4,INPUT_PULLUP);
	pinMode(BP_SW_PIN_5,INPUT_PULLUP);

	/* Set left and right button on LaunchPad as input */
	pinMode(LEFT_BTN, INPUT_PULLUP);
	pinMode(RIGHT_BTN, INPUT_PULLUP);

  pinMode(2, INPUT);
  pinMode(4, INPUT);
}

/* The loop() function runs after the setup() function completes in an Energia porgram 
   and will continue to run in a repeating loop until the LaunchPad is reset or powered off */
void loop() {
	
  rc2 = pulseIn(2,HIGH,25000);
  rc4 = pulseIn(4,HIGH,25000);
  Serial.println(rc2);
	/* Wait two seconds before starting */
	//delay(2000);
	digitalWrite(LP_RGB_LED_BLUE_PIN, HIGH);

	// Enable both motors
  
 
while(rc2 >1700)
 {
Serial.println("works");
left_motor.enableMotor();
  right_motor.enableMotor();
   digitalWrite(LP_RGB_LED_RED_PIN, HIGH);
	left_motor.directionForward();
	right_motor.directionForward();
 
	/* Set motor to 30% of its max speed */
	/* speed value goes from 0-100% */
	left_motor.setSpeed(100);
	right_motor.setSpeed(100);
 rc2 = pulseIn(2,HIGH,25000);
  rc4 = pulseIn(4,HIGH,25000);
 if( rc2<1700)
 {
  left_motor.disableMotor();
  right_motor.disableMotor(); 
 }
 }

 while(rc2 <1400)
 {
Serial.println("works");
left_motor.enableMotor();
  right_motor.enableMotor();
   digitalWrite(LP_RGB_LED_GREEN_PIN, HIGH);
 left_motor.directionBackward();
  right_motor.directionBackward();
 
  /* Set motor to 30% of its max speed */
  /* speed value goes from 0-100% */
  left_motor.setSpeed(30);
  right_motor.setSpeed(30);
 rc2 = pulseIn(2,HIGH,25000);
  rc4 = pulseIn(4,HIGH,25000);
 if( rc2<1700)
 {
  left_motor.disableMotor();
  right_motor.disableMotor(); 
 }
 }
	/* Drive the robot forward until it runs into something */
	
  
}
