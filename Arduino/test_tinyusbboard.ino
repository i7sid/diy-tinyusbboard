y /*
  test_tinyusbboard
  Connect a led to every digital and analog pin on your diy-tinyusbboard.
  This sketch runs a light from digital 0 to analog 5 to check solderconnections.
 */
 

// the setup routine sets all availible pins to output.
void setup() {                
  // initialize all digital pins as output:
  for(int pin=0;pin<=13;pin++){
    pinMode(pin, OUTPUT);
  }
  // set all analog pins to output
  DDRC |= 0x3F; 
}


void loop() {
  // run trough all digital pins
  for(int led=0;led<=13;led++){
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
  }
  // run throug all analog pins a
  PORTC |= 1;
  delay(200);
  for(int aled=0;aled<=5;aled++){
    PORTC <<=1;
    delay(200);
  }
  PORTC &= !(1<<5);
}
