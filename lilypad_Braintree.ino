/*
  Lilypad Braintree sketch
 */
 
int timer = 200;

uint8_t ledPinout[][8] = {
        {0,1,1,0,0,0,1,0}, //b
        {0,1,1,1,0,0,1,0}, //r
        {0,1,1,0,0,0,0,1}, //a
        {0,1,1,0,1,0,0,1}, //i
        {0,1,1,0,1,1,1,0}, //n
        {0,1,1,1,0,1,0,0}, //t
        {0,1,1,1,0,0,1,0}, //r
        {0,1,1,0,0,1,0,1}, //e 
        {0,1,1,0,0,1,0,1}, //e    
                        };
int ledPins[] = {5,6,9,10,11,'A2','A3','A4','A5'};
int pinCount = 9;
int pinLoop = 0;

void setup() {                
  for (int thisPin = 0; thisPin < pinCount; thisPin++)  {
    pinMode(ledPins[thisPin], OUTPUT);      
  }    
}

void loop() {
  
  for (int thisPin = 0; thisPin < pinCount; thisPin++) { 
    if(ledPinout[thisPin][pinLoop]==1){
      digitalWrite(ledPins[thisPin], HIGH);       
    }
    else{
      digitalWrite(ledPins[thisPin], LOW);           
    }
  }
  
  delay(timer);
  if(pinLoop < 7){
    pinLoop++;
  }
  else{
    pinLoop = 0;
  }
}
