/* Name LED to Digital Pin Number 2 */
const int LED = 2;

void setup() {
  /* Set LED pin number 2 as a output */
  pinMode(LED, OUTPUT);
}

void loop() {
  /* Set Pin Number 2 High */
  digitalWrite(LED, HIGH);
  delay(1000);
  /* Set Pin Number 2 Low */
  digitalWrite(LED, LOW);
  delay(1000);
}
