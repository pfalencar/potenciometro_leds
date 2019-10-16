#define potPin 0

int ledCount = 5;
int leds[] = {12,8,7,4,2};



void setup()
{
  for(int thisLed = 0; thisLed < ledCount; thisLed++){
    pinMode(leds[thisLed], OUTPUT);
  }
}


void loop()
{
  int leituraSensor = analogRead(potPin);
  int nivelLed = map ( leituraSensor , 0, 1023, 0, 5);
  
  for (int i = 0; i < ledCount; i++) {    
  
      if ( i < nivelLed ){
          digitalWrite (leds[i], HIGH);
      } else {
          digitalWrite (leds[i], LOW);
      } 
 
  }

  
}
