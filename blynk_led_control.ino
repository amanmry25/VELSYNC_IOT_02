#define BLYNK_TEMPLATE_ID "TMPL3BCP9wkMx"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "Y1sA7hAtC9EkDHnKu3zqr0n-syZpyI7c"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Aman";
char pass[] = "12345678";

#define LED_PIN 2

BLYNK_WRITE(V0) {
  int value = param.asInt();
  digitalWrite(LED_PIN, value ? HIGH : LOW);
}

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
