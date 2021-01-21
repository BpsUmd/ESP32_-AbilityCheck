#include <WebServer.h>
#include "WebServer_Ctrl.h"

//************************************************************
void InitWebServer(WebServer& ws, int i)
{
   WebServer Server(i);
   IPAddress ipadr;
}


//************************************************************
void handleRoot(WebServer& ws) {
  String temp = "Click <a href=\"/H\">here</a> to turn the LED on pin 5 on.<br />";
  temp += "Click <a href=\"/L\">here</a> to turn the LED on pin 5 off.\n";
  ws.send(200, "text/HTML", temp);
}