const int pinPulsador = 2; 
int estadoActual = 0;  

void setup() {
  Serial.begin(9600);        
  pinMode(pinPulsador, INPUT);  
}

void loop() {
  estadoActual = digitalRead(pinPulsador); 


  if (estadoActual == HIGH) {
    Serial.println("Presionado (HIGH / 1)");
  } else {
    Serial.println("No presionado (LOW / 0)");
  }
  
  delay(500); 
}
