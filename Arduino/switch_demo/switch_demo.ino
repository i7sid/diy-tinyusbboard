/*
  Switch Demo
 */


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(8, OUTPUT);           // initialize digital pin 8 as an output.
  pinMode(A3, INPUT);           // initialize analog pin 3 as an input.
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

    delay(200);                //delay 200ms

    while(!digitalRead(A3))
    {
    }
}
