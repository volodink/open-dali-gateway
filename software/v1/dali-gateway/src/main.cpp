#include <Arduino.h>
#include <TCA9554.h>

TCA9534 TCA(0x27);

void setup() {
	Wire.begin();
	TCA.begin();
	TCA.pinMode8(0xFF);

	Serial.begin(115200);
	delay(1000);

	Serial.print("Hello!");

	digitalWrite(RGB_BUILTIN, HIGH);
}

void loop() {
	;
}
