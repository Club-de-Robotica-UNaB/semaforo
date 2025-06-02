#include <Arduino.h>

int led_rojo = 11;
int led_amarillo =12;
int led_verde =13;

//funcion para encender un led por cierto tiempo
void controlarsemaforo(int led, int tiempo) {
  digitalWrite(led, HIGH);//encender
  delay(tiempo);
  digitalWrite(led, LOW);//apagar
  
}
void setup() {
  // configuramos los pines como salida
  pinMode(led_rojo,OUTPUT);
  pinMode(led_amarillo,OUTPUT);
  pinMode(led_verde,OUTPUT);
}

void loop() {
  // llamamos a la funcion semaforo con los tiempos deseados 
controlarsemaforo(led_verde, 3000); //verde 3 segundos
controlarsemaforo(led_amarillo, 1000);// amarillo 1 segundo
controlarsemaforo(led_rojo, 3000);// rojo 3 segundos
controlarsemaforo(led_amarillo, 1000);// amarillo 1 segundo
}