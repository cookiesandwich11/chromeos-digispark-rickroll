#include "DigiKeyboard.h"
void setup() {
  // this is rickroll code for chromeos
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_T);
  DigiKeyboard.delay(155);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_N);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_F4);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_L);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("chrome://settings");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_F);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("pop");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (int i = 0; i < 5; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(150);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (int i = 0; i < 15; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(150);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (int i = 0; i < 4; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(150);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("https://cookiesandwich11.github.io/chromeos-digispark-rickroll/");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_W);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_T);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("https://cookiesandwich11.github.io/chromeos-digispark-rickroll/");
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
