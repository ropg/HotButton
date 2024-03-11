#include <HotButton.h>

HotButton myButton(10);  // 10 = GPIO pin your button is attached to

void setup() {
  Serial.begin(115200);
}

void loop() {
  myButton.update();
  if (myButton.isSingleClick()) {
    Serial.println("The button was clicked.");
  }
  if (myButton.isDoubleClick()) {
    Serial.println("The button was double-clicked.");
  }
}
