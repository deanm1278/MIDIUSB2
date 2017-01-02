#include <MIDIUSB2.h>

void handleNoteOn(uint8_t channel, uint8_t note, uint8_t velocity){
  Serial.print("Note on channel ");
  Serial.print(channel);
  Serial.print(", note ");
  Serial.print(note);
  Serial.print(", vel ");
  Serial.println(velocity);
}

void handleNoteOff(uint8_t channel, uint8_t note, uint8_t velocity){
  Serial.print("Note off channel ");
  Serial.print(channel);
  Serial.print(", note ");
  Serial.println(note);
}

void handleControlChange(uint8_t channel, uint8_t control, uint8_t value){
  Serial.print("Control change channel ");
  Serial.print(channel);
  Serial.print(", CC ");
  Serial.print(control);
  Serial.print(", val ");
  Serial.println(value);
}

void setup() {
  Serial.begin(9600);
  MidiUSB.setHandleNoteOn(handleNoteOn);
  MidiUSB.setHandleNoteOff(handleNoteOff);
  MidiUSB.setHandleControlChange(handleControlChange);
}

void loop() {
  MidiUSB.read();
}
