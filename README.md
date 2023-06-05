# WEATHER-STATION
WEATHER ⛈ MONITORING 🌤 SYSTEM

A weather station project that measures temperature, humidity, and other weather parameters using sensors and displays the data on an LCD or uploads it to an online platform. The project is implemented using Arduino C++.

## Folder Structure

📂 weather_station
   
   |
   
   ├── 📂 src
   
   │   ├── 📄 main.cpp
   
   │   └── 📄 sensors.cpp
   
   └── 📄 weather_station.ino

The project folder structure consists of the following files and directories:

- **src**: This directory contains the source code files.
  - 📄 main.cpp: Main program file.
  - 📄 sensors.cpp: File containing sensor-related code.

- 📄 weather_station.ino: Arduino sketch file that integrates all the components of the Weather Station system.

## Installation and Setup

To use this Weather Station project, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- Temperature and humidity sensor
- Pressure sensor
- LCD display

Follow these steps to set up the project:

1. Download and install the Arduino IDE from the official Arduino website.
2. Clone or download this project repository.
3. Connect the sensors and LCD display to the Arduino board according to the project requirements.
4. Open the `weather_station.ino` file in the Arduino IDE.
5. Upload the code to the Arduino board.
6. Monitor the LCD display or the serial output to observe the weather station data.

## Code Explanation

The Weather Station project utilizes two source code files, `main.cpp` and `sensors.cpp`, to implement the functionality.

In the `main.cpp` file, the LCD display is initialized, and the main loop continuously reads the temperature, humidity, and pressure values from the sensors. The obtained data is then displayed on the LCD screen.

The `sensors.cpp` file contains functions to read the temperature, humidity, and pressure values from the respective sensors.

Make sure to adjust the code according to your specific sensor and LCD display connections and requirements.

## Troubleshooting

If you encounter any issues or have trouble setting up the Weather Station project, consider the following steps:

- Double-check the wiring connections between the sensors, LCD display, and the Arduino board.
- Verify that the required libraries are installed correctly. You can refer to the `requirements.txt` file for the necessary dependencies.
- Ensure that the Arduino board and port are selected correctly in the Arduino IDE.
- Check the LCD display or the serial monitor for any error messages or unexpected behavior.

If the problem persists, consult the documentation of the sensors, LCD display, and libraries used in the project or seek assistance from the Arduino community.

---

This README file provides an overview of the Weather Station project, its folder structure, installation instructions, code explanation, and troubleshooting tips. Use it as a guide to set up and understand the Weather Station system.
