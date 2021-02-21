#include <odroid_go.h>
#include <utility/bmp_map.h>

void setup() {
  GO.begin();
  GO.lcd.clearDisplay();
  uint32_t p = (uint32_t)((void *)gImage_logoM5);
  uint16_t *img = (uint16_t *)p;
  GO.lcd.pushRect(0,0,320,240,img);
}

void loop() {
}
