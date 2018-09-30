//exercicío 1 Jean Pereira
//ligar e desligar led com 2 botoes
 
const int botdesl = D1;      
const int botlig = D3;      
const int led =  D4;

int estbotdesl = 0;        
int estbotlig = 0; 

void setup() {
 
  pinMode(led, OUTPUT); 
  pinMode(botdesl, INPUT_PULLUP); 
  pinMode(botlig, INPUT_PULLUP); 

  digitalWrite(led,LOW);
}

void loop() {
  
  estbotdesl= digitalRead(botdesl);
  estbotlig = digitalRead(botlig);

  
  if (estbotlig == LOW) {
    
    digitalWrite(led, HIGH);
  }
  if (estbotdesl == LOW)  {

    digitalWrite(led, LOW);
  }
}
