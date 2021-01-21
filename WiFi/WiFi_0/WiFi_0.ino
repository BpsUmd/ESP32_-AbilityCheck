// #include <WiFi.h>
#include <WebServer.h>

#include "WiFi_Ctrl.h"
#include "WebServer_Ctrl.h"

const std::string SSID = "test";
const std::string PASS = "testPass";

WebServer WebS;

void setup() {
    InitWiFi(SSID, PASS);
    InitWebServer(WebS, 80);
}

void loop() {

}



//************************************************************
//************************************************************
//************************************************************