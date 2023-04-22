
int led = 8;
int msg;

void setup() {

  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);

}

void loop() {

  if (Serial.available() > 0) {

    msg = Serial.read();
      
     if (msg == 'a' ) {
       digitalWrite(led, HIGH);
     }

      if (msg == 'e' ) {
       digitalWrite(led, LOW);
     }
  }
}
