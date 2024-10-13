/* 
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
#define DHTPIN 18
#define DHTTYPE DHT22

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Wire.begin();
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Iniciando DHT22...");
  display.display();

  dht.begin();
  delay(2000);
}

void loop() {
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Leyendo sensor...");
  display.display();
  
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  display.clearDisplay();
  display.setCursor(0, 0);
  
  if (isnan(h) || isnan(t)) {
    display.println("Error de lectura!");
    display.print("Revisar conexion");
    display.print(" en pin ");
    display.println(DHTPIN);
    Serial.println("Error de lectura del DHT22");
  } else {
    display.println("Temp y Humedad:");
    display.print("Temp: ");
    display.print(t);
    display.println(" C");
    display.print("Humedad: ");
    display.print(h);
    display.println(" %");
    Serial.print("Humedad: ");
    Serial.print(h);
    Serial.print(" %\t");
    Serial.print("Temperatura: ");
    Serial.print(t);
    Serial.println(" *C");
  }
  
  display.display();
  delay(5000);  // Aumentado a 5 segundos
} */