/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/home/ianp/Documents/iot2021/labs/lab-4/src/lab-4.ino"
void setup();
void loop();
#line 1 "/home/ianp/Documents/iot2021/labs/lab-4/src/lab-4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

const uint16_t out = D6;
const uint16_t in = D7;

void setup()
{
  pinMode(out, OUTPUT);
  pinMode(in, INPUT);
}

void loop()
{
  if (digitalRead(in) == 1)
  {
    digitalWrite(out, HIGH);
  }
  else
  {
    digitalWrite(out, LOW);
  }
}