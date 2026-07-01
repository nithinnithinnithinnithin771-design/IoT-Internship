
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "OPPO Reno8 5G";
const char* password = "10092005";
const char* apiKey = "W0LUNNM8QE79IQD8";
const char* server = "api.thingspeak.com";

WiFiClient client;

void setup() {
  Serial.begin(115200);
  delay(10);
  
  WiFi.begin(ssid, password);
  Serial.println();
  Serial.print("Connecting to Wi-Fi");
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" Connected!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    
    // Simulate a sensor reading
    float sensorData = random(20, 30); 
    
    String url = "http://";
    url += server;
    url += "/update?api_key=";
    url += apiKey;
    url += "&field1=";
    url += String(sensorData);
    
    http.begin(client, url);
    int httpCode = http.GET();
    
    if (httpCode > 0) {
      Serial.print("Data sent! Response Code: ");
      Serial.println(httpCode);
    } else {
      Serial.println("Error sending data");
    }
    http.end();
  }
  
  // Send data every 20 seconds
  delay(20000); 
}
