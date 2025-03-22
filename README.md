# IoT Workshop: Arduino Kits & Raspberry Pi

This repository contains the code, resources and documentation for projects and experiments covered during the IoT workshop, which focuses on using **Arduino kits** and **Raspberry Pi** for building IoT applications.

## Table of Contents

- [Introduction](#introduction)
- [Workshop Overview](#workshop-overview)
- [Prerequisites](#prerequisites)
- [Hardware & Software Requirements](#hardware--software-requirements)
- [Setup Instructions](#setup-instructions)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction

The Internet of Things (IoT) is transforming how devices communicate with each other over the internet. In this workshop, participants learned how to integrate **Arduino** and **Raspberry Pi** in IoT projects. By using these platforms, we can create smart systems that interact with the physical world and send/receive data to/from the cloud or other devices.

## Workshop Overview

The IoT workshop covered the following:

- Introduction to IoT concepts and architecture.
- Basic and advanced applications of **Arduino** for sensing and control.
- Interfacing sensors and actuators with **Raspberry Pi** for data collection and processing.
- Connecting devices to the cloud for remote monitoring and control.
- Building simple IoT projects like a smart home system, temperature monitoring system, etc.

## Prerequisites

Before getting started with the projects in this repository, ensure that you have the following:

- Basic understanding of programming (preferably in Python and C).
- Familiarity with **Arduino** and **Raspberry Pi**.
- Desire to explore and learn IoT concepts.

## Hardware & Software Requirements

### Hardware

- **Arduino Kits** (e.g., Arduino Uno, sensors, actuators)
- **Raspberry Pi** (Raspberry Pi 3/4 recommended)
- **Jumper wires**, **breadboard** and various **sensors** (e.g., temperature, humidity, motion)
- Power supply for **Raspberry Pi** and **Arduino**

### Software

- **Arduino IDE** for writing and uploading Arduino code.
- **Raspberry Pi OS** (Raspberry Pi OS or any Linux-based system).
- **Python 3.x** (for Raspberry Pi scripting).
- Libraries for IoT communication (e.g., MQTT, HTTP, etc.).

## Setup Instructions

### 1. Setting Up the Arduino IDE

1. Install the **Arduino IDE** on your computer: [Arduino IDE Download](https://www.arduino.cc/en/software).
2. Connect your Arduino board to your computer using a USB cable.
3. Open the Arduino IDE and select the correct board and port under **Tools** > **Board** and **Port**.
4. Upload the example code provided in this repository to your Arduino.

### 2. Setting Up Raspberry Pi

1. Install **Raspberry Pi OS** on your Raspberry Pi (follow the official guide: [Install Raspberry Pi OS](https://www.raspberrypi.org/software/)).
2. Connect Raspberry Pi to the internet and enable SSH for remote access.
3. Install the necessary Python libraries:
   ```bash
   sudo apt update
   sudo apt install python3-pip
   sudo pip3 install paho-mqtt
   sudo pip3 install RPi.GPIO
   ```

### 3. Running the Code

Once everything is set up, navigate to the project folder and run the appropriate scripts for your Raspberry Pi and Arduino boards.

For **Raspberry Pi**:

```bash
python3 <project_name>.py
```
