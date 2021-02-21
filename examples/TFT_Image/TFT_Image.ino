#include <odroid_go.h>
#include <utility/bmp_map.h>

// Show M5STACK logo from bmp_map.h (rgb565 format)

void setup() {
  GO.begin();
  uint16_t *img = (uint16_t *)((void *)gImage_logoM5);
  GO.lcd.pushRect(0,0,320,240,img);
}

void loop() {
}
