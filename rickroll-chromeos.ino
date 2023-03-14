#include "DigiKeyboard.h"
void setup() {
  // this is rickroll code for chromeos
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_F4);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("chrome://settings");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  //DigiKeyboard.sendKeyStroke(KEY_F, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.println("pop");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (int i = 0; i < 6; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(150);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (int i = 0; i < 16; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(150);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (int i = 0; i < 5; i++) {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(150);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("https://cookiesandwich11.github.io/chromeos-digispark-rickroll/");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("https://cookiesandwich11.github.io/chromeos-digispark-rickroll/");
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(45, MOD_ALT_LEFT);
  
}

void loop() {}
