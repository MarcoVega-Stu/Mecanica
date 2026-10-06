int led_rojo = 11;
int led_verde = 10;
void setup()
{
  pinMode(led_rojo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}
void loop()
{
  digitalWrite(led_rojo, HIGH);
  digitalWrite(led_verde, HIGH);
  delay(1000);
  digitalWrite(led_rojo, LOW);
  digitalWrite(led_verde, LOW);
  delay(1000);
}