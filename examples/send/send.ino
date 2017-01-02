#include <MIDIUSB2.h>

void setup() {
}

void loop() {
  MidiUSB.sendNoteOn(37, 100, 1);
  delay(1000);
  MidiUSB.sendNoteOff(37, 0, 1);
  delay(1000);
}
