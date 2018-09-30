// exercicio 3 Jean Pereira
// controle tempo para piscar led com valor analógico


int referencialed = 0;       
int ldr = A0;     
const int led = D4;
int valoranalog = 0 ;


void setup() {
  
Serial.begin(115200);   
pinMode(led, OUTPUT);
  
}

void loop() {
       
  Serial.print("Valor LDR em % =");     
  Serial.println(valoranalog*100.0/1023.0);
  valoranalog = analogRead(ldr);  
  
  referencialed = map(valoranalog, 0, 1023, 0, 2000);   //Converte e atribui para a variavel "referencia" o valor lido no LDR 
  
  Serial.print("Valor referencia de tempo em milisegundos =");      //Print Valor LDR em Porcentagem na Serial
  Serial.println(referencialed);  //Print Valor em % da Entrada Analógica LDR na Serial  
  
  if (referencialed>10) { 
      digitalWrite(led, LOW);   
      delay(referencialed);                //Tempo Ligado  
      digitalWrite(led,HIGH);   //Desliga LED
      delay(referencialed);                //Tempo Desligado
  } else {
      digitalWrite(led,HIGH);    //Desliga LED
  }
 
  
}
