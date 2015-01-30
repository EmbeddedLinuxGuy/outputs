#include <Servo.h>

Servo r_servo;
Servo l_servo;

#define r_servo_pin 3
#define l_servo_pin 4

#define FORWARD 180
#define STOP 90
#define BACKWARD 0

#define PAUSE 1200 // 1200ms delay

void setup () {
	r_servo.attach(r_servo_pin);
	l_servo.attach(l_servo_pin);	
}

void forward () {
	r_servo.write(FORWARD);
	l_servo.write(BACKWARD);
}

void reverse () {
	r_servo.write(BACKWARD);
	l_servo.write(FORWARD);
}

void stop_servo () {
	r_servo.write(STOP);
	l_servo.write(STOP);
}

void turn_left () {
	r_servo.write(FORWARD);
	l_servo.write(FORWARD);
}

void turn_right () {
	r_servo.write(BACKWARD);
	l_servo.write(FORWARD);
}

void loop () {
	forward();
	delay(PAUSE);
	reverse();
	delay(PAUSE);
#if 0
	forward();
	delay(PAUSE);
	stop_servo();
	delay(PAUSE);
	reverse();
	delay(PAUSE);
	stop_servo();
	delay(PAUSE);

	turn_left();
	delay(PAUSE);
	turn_right();
	delay(PAUSE);
#endif
}

