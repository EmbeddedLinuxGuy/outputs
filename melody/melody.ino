#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262

#define LEN 8

#define tone_pin 2

int melody[LEN] = {
	NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int note_durations[LEN] = {
	4, 8, 8, 4, 4, 4, 4, 4
};

void setup () {
	for (int this_note = 0; this_note < LEN; ++this_note) {
		int duration = 1000 / note_durations[this_note];
		tone(tone_pin, melody[this_note], duration);
		int pause = duration * 1.3;
		delay(pause);
		noTone(tone_pin);	
	}
}

void loop () {

}

