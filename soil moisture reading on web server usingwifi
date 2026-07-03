#include <ESP8266WiFi.h>
#include<ESP8266WebServer.h>
ESP8266WebServer Server(80);

const char* ssid = "OPPO Reno8 5G";
const char* password ="10092005";

void setup() {
  Serial.begin(115200);
  Serial.println();

  // Connect to Wi-Fi
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
  Server.on("/",getsoil);
  Server.begin();
  Serial.println("HTTP server start");
}
void getsoil(){
  int m= analogRead(A0);
  String Page="</html>";
  Page +="<h1>soil moisture china</h1>" ;
  Page +="<p>"+ String(m) +"</p>" ;
  Page +="</html>" ;
  Server.send(200,"text/html",Page);
  
}

void loop() {
  Server .handleClient();
  // Your code goes here
}
