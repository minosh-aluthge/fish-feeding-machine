# 🐟 Automatic Fish Feeding Machine (Arduino)

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)](https://www.arduino.cc/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## 📌 Project Overview

This is an **Automatic Fish Feeder** created in 2023 using Arduino. The machine controls a servo motor to rotate a food container and drop food at scheduled times or by manual button press.

It helps aquarium owners to automatically feed their fish even when they are not at home, ensuring your aquatic pets are well-fed and healthy! 🐠

## ⚡ Features

- ⏱️ **Automatic feeding** every set interval (FISHFEEDER variable controls feeding delay)
- 🎛️ **Manual feeding mode** (push button)
- 🔊 **Buzzer alert** during feeding
- 💡 **LED indicators** for feeding status
- 🌀 **Servo motor** rotates food container smoothly
- 🔋 **Low power consumption**
- 🛡️ **Reliable operation**

## 🛠️ Components Used

| Component | Quantity | Purpose |
|-----------|----------|---------|
| Arduino Uno / Nano | 1 | Main controller |
| Servo Motor (SG90 or similar) | 1 | Food container rotation |
| Push Buttons | 2 | Auto/Manual feeding control |
| LEDs | 2 | Status indication |
| Buzzer | 1 | Feeding alert |
| Resistors (220Ω, 10kΩ) | As needed | Current limiting & pull-up |
| Jumper Wires | As needed | Connections |
| Breadboard | 1 | Circuit prototyping |

## 🔌 Circuit Connections

| Component | Arduino Pin | Notes |
|-----------|-------------|-------|
| Servo Motor | Pin 7 | Signal wire (Orange/Yellow) |
| Push Button 1 (Auto Feed) | Pin 13 | Pull-up resistor recommended |
| Push Button 2 (Manual Feed) | Pin 12 | Pull-up resistor recommended |
| LED 1 (Status) | Pin 10 | With 220Ω resistor |
| LED 2 (Feeding) | Pin 11 | With 220Ω resistor |
| Buzzer | Pin 8 | Active buzzer |

### 📊 Wiring Diagram

```
Arduino Uno
     ┌─────────────────┐
     │                 │
     │             5V ├─── Servo Red Wire
     │            GND ├─── Servo Brown/Black Wire
     │            Pin7├─── Servo Orange/Yellow Wire
     │                 │
     │           Pin13├─── Button 1 (Auto)
     │           Pin12├─── Button 2 (Manual)
     │                 │
     │           Pin10├─── LED 1 (+ 220Ω resistor)
     │           Pin11├─── LED 2 (+ 220Ω resistor)
     │            Pin8├─── Buzzer
     │                 │
     └─────────────────┘
```

## 📜 Code

The full Arduino source code is available in [`fish_feeder.ino`](fish_feeder.ino).

### 🔧 Installation & Setup

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/automatic-fish-feeder.git
   cd automatic-fish-feeder
   ```

2. **Open Arduino IDE** and load `fish_feeder.ino`

3. **Install required libraries** (if any):
   - Servo library (usually pre-installed with Arduino IDE)

4. **Select your board and port** in Arduino IDE

5. **Upload the code** to your Arduino

## 🚀 Usage

1. **Setup:** Connect all components according to the wiring diagram
2. **Power on:** Connect Arduino to power source (USB or external)
3. **Auto Mode:** Press the Auto button to enable scheduled feeding
4. **Manual Mode:** Press the Manual button to instantly feed fish
5. **Status:** Watch LEDs and listen for buzzer alerts during feeding

### ⚙️ Configuration

You can modify these variables in the code:

```cpp
#define FISHFEEDER 3600000  // Feeding interval in milliseconds (1 hour = 3600000ms)
#define SERVO_ANGLE 90      // Rotation angle for food dispensing
#define FEEDING_DURATION 2000 // How long servo stays rotated (ms)
```

## 📸 Demo

<!-- Add photos/videos of your project here -->
![Fish Feeder in Action](images/feeder_demo.jpg)
*Caption: The automatic fish feeder in operation*

## 🔧 Future Improvements

- [ ] **Adjustable feeding interval** (via potentiometer or mobile app)
- [ ] **IoT Integration** (Virtuino / Blynk) for remote control
- [ ] **LCD/OLED display** for status and settings
- [ ] **Food level sensor** to detect when container is empty
- [ ] **Real-time clock (RTC)** for precise feeding schedules
- [ ] **Mobile app** for monitoring and control
- [ ] **Multiple feeding chambers** for different food types

## 🐛 Troubleshooting

| Problem | Solution |
|---------|----------|
| Servo not moving | Check power supply and connections |
| No buzzer sound | Verify buzzer polarity and pin connection |
| LEDs not lighting | Check resistor values and connections |
| Buttons not responding | Ensure pull-up resistors are connected |

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

You can use, modify, and share this project for educational and personal use.

## 📅 Project History

- **2022:** Initial creation as a personal project
- **2025:** Published on GitHub for community use and improvement

## 🙏 Acknowledgments

- Arduino community for excellent documentation and support
- Open source hardware and software ecosystem
- Fish enthusiasts who inspired this project


---

⭐ **Star this repository if you found it helpful!** ⭐

Made with ❤️ for fish lovers everywhere 🐟
