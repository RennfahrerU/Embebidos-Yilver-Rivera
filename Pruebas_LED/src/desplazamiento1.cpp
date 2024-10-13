/* Este es un desplazamiento vertical de abajo hacia arriba */

/* 
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const char* mensaje = "Este es un mensaje muy largo que no cabe en la pantalla de una sola vez.";
int posicion = 0;

void setup() {
  Wire.begin();
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  display.setTextSize(2);
  display.setTextColor(WHITE);
}

void loop() {
  display.clearDisplay();
  display.setCursor(0, 0);
  
  // Mostrar una parte del mensaje
  for(int i = 0; i < 3; i++) {  // Muestra 3 líneas
    for(int j = 0; j < 10 && mensaje[posicion] != '\0'; j++) {  // Hasta 10 caracteres por línea
      display.print(mensaje[posicion]);
      posicion++;
    }
    display.println();
  }
  
  display.display();
  
  delay(1000);  // Espera 1 segundo antes de desplazar
  
  // Reinicia la posición si llegamos al final del mensaje
  if(mensaje[posicion] == '\0') {
    posicion = 0;
  }
} */