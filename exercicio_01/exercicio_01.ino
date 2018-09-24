/*
  Exercicio 01 JEAN PEREIRA MARTINS
  IOT na prática com o ESP8266

*/
const int buttonPinOff = D1; 
const int buttonPinOn = D3;   
const int ledPin =  D4;      


int buttonStateOff = 0;       
int buttonStateOn = 0;         

void setup() {

  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPinOff, INPUT_PULLUP); 
  pinMode(buttonPinOn, INPUT_PULLUP); 

   
   digitalWrite(ledPin, LOW);

  
}

void loop() {
  
  buttonStateOff = digitalRead(buttonPinOff);
  buttonStateOn = digitalRead(buttonPinOn);

  
  if (buttonStateOn == LOW) {
    // Liga o Led (Depende da ligação):
    digitalWrite(ledPin, HIGH);
  }
  if (buttonStateOff == LOW)  {
    // Apaga o led
    digitalWrite(ledPin, LOW);
  }
}
