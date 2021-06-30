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