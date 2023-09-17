#include <Arduino.h>

void duplicar(int *punteroNumero);

int numero= 10;

void setup(){
      Serial.begin(115200);
}
 void loop() {
   Serial.println("en loop(): numero = ");
   Serial.println(numero);
   duplicar(&numero);
 }

void duplicar( int *punteroNumero){
  
   *punteroNumero = *punteroNumero *2;
   Serial.println("En duplicar(): punteroNumero=");
   Serial.println(*punteroNumero);
}