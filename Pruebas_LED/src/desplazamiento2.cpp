/* Este hace un desplazamiento horizontal */

/* 
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1 // Reset pin # (or -1 if sharing Arduino reset pin)

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

String mensaje = "Este es un mensaje largo que se desplazara horizontalmente por la pantalla OLED...   ";
int16_t x, minX;

void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setTextWrap(false);
  
  int16_t dummy;
  uint16_t w, h;
  display.getTextBounds(mensaje, 0, 0, &dummy, &dummy, &w, &h);
  x = display.width();
  minX = -w;
}

void loop() {
  display.clearDisplay();
  display.setCursor(x, (display.height() - 16) / 2);
  display.print(mensaje);
  display.display();
  
  x--;
  if (x < minX) x = display.width();
  
  delay(25);  // Ajuste este valor para cambiar la velocidad de desplazamiento
} */