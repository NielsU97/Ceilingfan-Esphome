#include "esphome.h"
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

const int IrLed = 4; // Define the pin for the IR LED

enum IRcommand {
  light     = 0xC08,
  fanhigh   = 0xC01,
  fanmedium = 0xC04,
  fanlow    = 0xC43,
  fanoff    = 0xC10
};

IRsend irsend = IRsend(IrLed);

void sendLight() {
      irsend.begin();
      irsend.sendSymphony(0xC00, 12, 1); // Common pre-command
      irsend.sendSymphony(0xC7F, 12, 1); // Common pre-command
      irsend.sendSymphony(light, 12, 3); // Send the actual command
};

void sendFanOff() {
      irsend.begin();
      irsend.sendSymphony(0xC00, 12, 1); // Common pre-command
      irsend.sendSymphony(0xC7F, 12, 1); // Common pre-command
      irsend.sendSymphony(fanoff, 12, 3); // Send the actual command
};

void sendFanLow() {
      irsend.begin();
      irsend.sendSymphony(0xC00, 12, 1); // Common pre-command
      irsend.sendSymphony(0xC7F, 12, 1); // Common pre-command
      irsend.sendSymphony(fanlow, 12, 3); // Send the actual command
};

void sendFanMedium() {
      irsend.begin();
      irsend.sendSymphony(0xC00, 12, 1); // Common pre-command
      irsend.sendSymphony(0xC7F, 12, 1); // Common pre-command
      irsend.sendSymphony(fanmedium, 12, 3); // Send the actual command
};

void sendFanHigh() {
      irsend.begin();
      irsend.sendSymphony(0xC00, 12, 1); // Common pre-command
      irsend.sendSymphony(0xC7F, 12, 1); // Common pre-command
      irsend.sendSymphony(fanhigh, 12, 3); // Send the actual command
};