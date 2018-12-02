HardwareSerial Serial2(USART2);   // or HardWareSerial Serial2 (PA3, PA2);
HardwareSerial Serial3(USART3);

void setup() {
Serial.begin(19200);   // on PA9 PA10
Serial2.begin(19200);  // on PA3 PA2
Serial3.begin(19200);  // on PB11 PB10

Serial.println("Serial: HELL000");
Serial2.println("Serial2: Hell");
Serial3.println("Serial3: Lo !");
}

void loop() {
}


// refer .../variants/BLUEPILL_F103C8/PeripheralPins.c to see relevant/possible pins 
