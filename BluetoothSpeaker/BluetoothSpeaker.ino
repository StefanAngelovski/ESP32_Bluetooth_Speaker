#include "esp32_bt_music_receiver.h"

BluetoothA2DSink a2dp_sink; //initialize bluetooth speaker library

void setup() {
    a2dp_sink.start("My Bluetooth Speaker"); //start bluetooth with the name in ""
}

void loop() {
}