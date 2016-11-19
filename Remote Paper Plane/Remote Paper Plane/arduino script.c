int LeftMotor = 24;
int RightMotor = 25;

int LeftCMD = 10;
int RightCMD = 11;
int OnOffCMD = 12;
int PWRCMD = 13;

int LoopVar = 0; 

void setup() {
	// put your setup code here, to run once:
	pinMode(LeftMotor, OUTPUT); //a1 - left motor
	pinMode(RightMotor, OUTPUT); //a2 - right motor

	pinMode(LeftCMD, INPUT); //d6 - left
	pinMode(RightCMD, INPUT); //d7 - right
	pinMode(OnOffCMD, INPUT); //d8 - on/off
	pinMode(PWRCMD, INPUT); //d9 - half/full power

}

void loop() {
	// put your main code here, to run repeatedly:
	if (OnOffCMD == HIGH) {
		LoopVar = 1;
		while (LoopVar == 1) {
			analogWrite(LeftMotor, 255);
			analogWrite(RightMotor, 255);
			if (LeftCMD == HIGH) {
				analogWrite(LeftMotor, 0);
			}
			else {
				analogWrite(LeftMotor, 255);
			}

			if (RightCMD == HIGH) {
				analogWrite(RightMotor, 0);
			}
			else {
				analogWrite(RightMotor, 255);
			}

			if (OnOffCMD == LOW) {
				LoopVar = 0;
			}

		}
	}




}