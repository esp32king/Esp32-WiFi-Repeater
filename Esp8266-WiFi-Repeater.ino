#include <ESP8266WiFi.h>

// Replace with your source Wi-Fi credentials
const char* sourceSSID = "Your_Source_WiFi";
const char* sourcePassword = "Your_WiFi_Password";

// Repeater AP credentials
const char* repeaterSSID = "ESP8266_Repeater";
const char* repeaterPassword = "12345678";

void setup() {
  Serial.begin(115200);

  // Connect to source Wi-Fi
  WiFi.mode(WIFI_STA);
  WiFi.begin(sourceSSID, sourcePassword);
  Serial.println("Connecting to source Wi-Fi...");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Connected! IP: ");
  Serial.println(WiFi.localIP());

  // Start Repeater AP
  WiFi.mode(WIFI_AP_STA); // AP + STA mode
  WiFi.softAP(repeaterSSID, repeaterPassword);
  Serial.print("Repeater AP started with IP: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // ESP8266 handles client routing automatically
}
