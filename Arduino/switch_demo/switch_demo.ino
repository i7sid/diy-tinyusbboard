/*
  Switch Demo
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(8, OUTPUT);
  pinMode(A3, INPUT);
  digitalWrite(A3, HIGH);       // turn on pullup resistors
}

// the loop function runs over and over again forever
void loop() {
  static int state = 0;
    if(!digitalRead(A3))
      state = !state;
    else
      return;

    if(state)
      digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
    else
      digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW

    delay(200);

    while(!digitalRead(A3))
    {
    }
}
