#include <Arduino.h>

int numero = 10; // Variable global

void duplicar(int * puntero); // Prototipo de la funcion duplicar

/**
 * @brief Este es el punto de entrada del programa
 * Sirve para inicializar las variables y configuraciones
 */

void setup() { // 10KHz es el el maximo ancho de banda de una linea telefonica: 10000 bits por segundo
  Serial.begin(115200);
}

/**
 * @brief Este es el loop principal del programa
 * Se ejecuta despues de que el setup termina
 */

void loop() {
  Serial.println("[loop] numero = "+String(numero)); //Imprime: numero = 10
  duplicar(&numero); // & numero significa que le paso la direccion de memoria de la variable numero
  delay(1000); // 1 segundo de espera
}

//El operador direccion de memoria & se utiliza para obtener la direccion de memoria de una variable
//El operador indireccion * se utiliza para acceder al valor de la direccion de memoria que se le pasa

// Implementacion de la funcion duplicar
void duplicar(int * puntero){
    * puntero = * puntero * 2; // * puntero significa que accedo al valor de la direccion de memoria que me pasaron
    Serial.println("[duplicar] numero = "+String(* puntero)); //Imprime: numero = 20
}