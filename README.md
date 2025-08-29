🐟 Automatic Fish Feeding Machine (Arduino)
📌 Project Overview

This is an Automatic Fish Feeder created in 2023 using Arduino.
The machine controls a servo motor to rotate a food container and drop food at scheduled times or by manual button press.

It helps aquarium owners to automatically feed their fish even when they are not at home.

⚡ Features

⏱ Automatic feeding every set interval (FISHFEEDER variable controls feeding delay).

🎛 Manual feeding mode (push button).

🔊 Buzzer alert during feeding.

💡 LED indicators for feeding status.

🌀 Servo motor rotates food container smoothly.

🛠 Components Used

Arduino Uno / Nano

Servo Motor (SG90 or similar)

Push buttons (for auto/manual feeding control)

LEDs (status indication)

Buzzer (feeding alert)

Resistors and jumper wires

Breadboard

🔌 Circuit Connections
Component	Arduino Pin
Servo Motor	7
Push Button 1 (Auto Feed)	13
Push Button 2 (Manual Feed)	12
LED 1	10
LED 2	11
Buzzer	8
📜 Code

The full Arduino source code is available in fish_feeder.ino
.
You can upload it using Arduino IDE.

🚀 Usage

Upload code to Arduino.

Connect components as shown.

Press Auto button to enable scheduled feeding.

Press Manual button to instantly rotate servo and feed fish.

Watch LEDs and buzzer for feeding status.

🔧 Future Improvements

Adjustable feeding interval (via potentiometer or mobile app).

Integration with IoT (Virtuino / Blynk) for remote control.

LCD / OLED display for status.

📅 Project History

Created in 2023 as a personal project.

Published on GitHub in 2025 for others to use and improve.

📄 License

You can use, modify, and share this project for educational and personal use.
