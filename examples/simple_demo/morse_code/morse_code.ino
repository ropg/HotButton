#include <HotButton.h>

HotButton MyButton(39);  // 39 = GPIO pin DA, our button is attached to

void setup() {
  Serial.begin(115200);
}

void loop() {
  MyButton.update();
  if (MyButton.event(DIT, DA)) Serial.print("A");
  if (MyButton.event(DA, DIT, DIT, DIT)) Serial.print("B");
  if (MyButton.event(DA, DIT, DA, DIT)) Serial.print("C");
  if (MyButton.event(DA, DIT, DIT)) Serial.print("D");
  if (MyButton.event(DIT)) Serial.print("E");
  if (MyButton.event(DIT, DIT, DA, DIT)) Serial.print("F");
  if (MyButton.event(DA, DA, DIT)) Serial.print("G");
  if (MyButton.event(DIT, DIT, DIT, DIT)) Serial.print("H");
  if (MyButton.event(DIT, DIT)) Serial.print("I");
  if (MyButton.event(DIT, DA, DA, DA)) Serial.print("J");
  if (MyButton.event(DA, DIT, DA)) Serial.print("K");
  if (MyButton.event(DIT, DA, DIT, DIT)) Serial.print("L");
  if (MyButton.event(DA, DA)) Serial.print("M");
  if (MyButton.event(DA, DIT)) Serial.print("N");
  if (MyButton.event(DA, DA, DA)) Serial.print("O");
  if (MyButton.event(DIT, DA, DA, DIT)) Serial.print("P");
  if (MyButton.event(DA, DA, DIT, DA)) Serial.print("Q");
  if (MyButton.event(DIT, DA, DIT)) Serial.print("R");
  if (MyButton.event(DIT, DIT, DIT)) Serial.print("S");
  if (MyButton.event(DA)) Serial.print("T");
  if (MyButton.event(DIT, DIT, DA)) Serial.print("U");
  if (MyButton.event(DIT, DIT, DIT, DA)) Serial.print("V");
  if (MyButton.event(DIT, DA, DA)) Serial.print("W");
  if (MyButton.event(DA, DIT, DIT, DA)) Serial.print("X");
  if (MyButton.event(DA, DIT, DA, DA)) Serial.print("Y");
  if (MyButton.event(DA, DA, DIT, DIT)) Serial.print("Z");
}
