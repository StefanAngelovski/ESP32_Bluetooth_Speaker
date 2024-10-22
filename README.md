# ESP32 Bluetooth Speaker

This project features an **ESP32 Bluetooth Speaker**, which acts as an audio device. When connected via Bluetooth from a phone or another device, it allows you to stream music wirelessly.

## Project Overview

The speaker is powered by an **ESP32 Dev Module**, which handles the Bluetooth connection and audio streaming.

[Watch the demo video here](https://github.com/user-attachments/assets/53561389-93f5-4d04-a262-4a0a28de1fad)

---

## Images

![Front of the Bluetooth Speaker](https://res.cloudinary.com/dk2fdiuvb/image/upload/v1729623131/projects/kbhoamzvn8meolcrmitg.png)

The front of the Bluetooth speaker, showing the core components.

![Back of the Bluetooth Speaker](https://res.cloudinary.com/dk2fdiuvb/image/upload/v1729621555/projects/c3nlofk0elsvhzdzkiuu.png)

The back view, displaying the battery and other modules.

---

## Key Components

### ESP32 Dev Module
The **ESP32** acts as the microprocessor, controlling Bluetooth communication and managing the audio stream.

### PCM5102a I2C Decoder
The **PCM5102a** converts the digital audio signals received via Bluetooth into analog signals for output.

### PAM8403 5V Digital Amplifier
The **PAM8403** is a 5V amplifier that boosts the analog audio signal. It has an attached potentiometer for volume control.

### 600mAh Li-Ion Rechargeable Battery
A **600mAh Li-Ion battery** powers the speaker. It provides enough charge for moderate use.

### Li-Ion Charger
A **Li-Ion charger** is included to recharge the battery when needed.

---

## Customized Library

I created a modified library to improve the Bluetooth audio handling and ensure stable audio streaming for the ESP32 module.
