#include <M5Unified.h>

void setup() {
  M5.begin(M5.config());

  M5.Display.setTextSize(2);
  M5.Display.print("primary display\n");
}


void loop() {}
