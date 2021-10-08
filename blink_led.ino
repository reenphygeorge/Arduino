void setup() {
  
  pinMode(13,OUTPUT); //we're using pin 13 as an OUTPUT

}

void loop() {
  
  digitalWrite(13,HIGH); //Turn ON the LED
  delay(900); //Wait for 900ms
  digitalWrite(13,LOW); // Turn OFF the LED
  delay(800);

}
