// Sensor_pin connecting to component
const int SENSOR_PIN = A0;

void setup() {
  // start serial comms at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // print an analog read val (0-1023) to the serial port
  Serial.println(analogRead(SENSOR_PIN));
  
  // slight delay to settle analog-to-digital converter
  delay(2);
}
