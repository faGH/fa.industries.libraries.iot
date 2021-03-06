#include "DebugAssist.h"

#define DEBUG true

DebugAssist debugger;

void setup() {
  Serial.begin(9600);
  debugger.initialize(DEBUG);
}

void loop() {
  debugger.printLog("Append message to serial only when debug flag is true.");
  debugger.printLogLn("Append message to new line on serial only when debug flag is true.");
  delay(1000);
}
