const int motor_1_pin = 5;
const int motor_2_pin = 6;
const int motor_enable_pin = 7;
const int sensor_pin = A0;

long last_report_time = 0;

void setup () {
	
}

void loop () {
	long sensor_value = analogRead(sensor_pin);

	if (sensor_value < 256) {
		digitalWrite(motor_enable_pin, LOW);
	} else if (sensor_value < 512) {
		digitalWrite(motor_enable_pin, HIGH);
		digitalWrite(motor_1_pin, HIGH);
		digitalWrite(motor_2_pin, LOW);
	} else {
		digitalWrite(motor_enable_pin, HIGH);
		digitalWrite(motor_1_pin, HIGH);
		digitalWrite(motor_2_pin, HIGH); 	
	}
}

