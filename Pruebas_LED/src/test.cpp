#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h> 
#endif

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);


void setup(void){
  u8g2.begin();
}

void loop(void){
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB08_tr);
  u8g2.drawStr(10, 10, " *  *");
  u8g2.drawStr(10, 15, "**");
  u8g2.drawStr(10, 20, "  ** ");
  u8g2.drawStr(10, 25, "    ** ");
  u8g2.drawStr(60, 40, "(\\_/)");
  u8g2.drawStr(60, 50, "(o^.^)");
  u8g2.drawStr(50, 60, "z(_(\")(\"))");
  u8g2.sendBuffer();
  delay(1000);
}