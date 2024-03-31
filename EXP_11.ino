#define led 2
#define red 15
#define green 12
#define blue 13
#define ldr A0

void setup() {
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);  // Initialize the LED_BUILTIN pin as an output
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int val=analogRead(ldr);
  Serial.println(val);
  digitalWrite(red, LOW);
  delay(500);                      // Wait for a second
  digitalWrite(red, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(500); 
  digitalWrite(green, LOW);
  delay(500);                      // Wait for a second
  digitalWrite(green, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(500); 
  digitalWrite(blue, LOW);
  delay(500);                      // Wait for a second
  digitalWrite(blue, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(500); 
  digitalWrite(LED_BUILTIN, LOW);  // Turn the LED on (Note that LOW is the voltage level
  // but actually the LED is on; this is because
  // it is active low on the ESP-01)
  delay(500);                      // Wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(500);                      // Wait for two seconds (to demonstrate the active low LED)
}
