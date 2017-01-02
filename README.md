# MIDIUSB2
MIDIUSB arduino library but w/ callback and sysex support

This is mostly just the MIDIUSB library (https://www.arduino.cc/en/Reference/MIDIUSB) but with the midi parser from Paul Stoffregen's teensy midi usb core added (https://github.com/PaulStoffregen/cores/tree/master/usb_midi)

This allows for callbacks to be used for easier handling of received midi data. See examples/receive_callbacks.ino

A callback for handling sysex data has also been added which was not in the teensy core. This can deal with sysex arrays as large as you want limited by your boards available RAM. Note that the default max allowed sysex array size is 60 bytes. To modify this, change USB_MIDI_SYSEX_MAX in MIDIUSB2.h

This has been lightly tested w/ both 32u4 and SAMD21 boards
