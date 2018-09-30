//exercicio 2 Jean Pereira
//Iluminação publica com LDR


#define anoitecer 10   
#define amanhecer 90
   
int ldr = A0;        
int luminosidade = 0 ;
const int poste = D4;     


void setup() {

  Serial.begin(115200);
  
pinMode(poste, OUTPUT); 

}



void loop() {
  
 luminosidade = analogRead(ldr); 
    if(luminosidade<=anoitecer)  
 {
   digitalWrite(poste,LOW);    // liga LED
 }
 else if(luminosidade>=amanhecer) 
 {
   digitalWrite(poste,HIGH);    //Desliga LED
 }
 
   Serial.print("Valor LDR=");   
   Serial.println(luminosidade); 

   }
  
