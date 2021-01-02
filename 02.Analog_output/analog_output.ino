/* Name LED to Digital Pin Number 2 */
const int LED_ananlog = 3;

void setup() {
  /* Set LED pin number 2 as a output */
  pinMode(LED_ananlog, OUTPUT);
}

void loop() {
  /* Increase the Brightness */
  for (int brightness = 1; brightness <= 255; brightness++){
    analogWrite(LED_ananlog, brightness);
    delay(10);
  }

  /* Decrease the Brightness */
  for (int brightness = 255; brightness <= 1; brightness--){
    analogWrite(LED_ananlog, brightness);
    delay(10);
  }
}
