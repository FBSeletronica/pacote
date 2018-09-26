#include "franzOLED.h"
// ============================================================================

#include "img0_128x64c1.h"

void setup() {
  // put your setup code here, to run once:
  oled.begin();
}

void loop() {
  oled.fill(0xFF); //Preenche a o display com a cor
  delay(1000);     //Aguarda 1 segundo
  oled.clear();    //limnpa display
  delay(1000);     //Aguarda 1 segundo

  //usage oled.bitmap(START X IN PIXELS, START Y IN ROWS OF 8 PIXELS, END X IN PIXELS, END Y IN ROWS OF 8 PIXELS, IMAGE ARRAY);
  oled.bitmap(0, 0, 128, 8, img0_128x64c1);
  delay(3000);
}
