# PIC16F887 Development Board

![Hardware](https://img.shields.io/badge/Hardware-EasyEDA-blue)
![Microcontroller](https://img.shields.io/badge/MCU-PIC16F887-red)

A custom development and prototyping board based on the Microchip **PIC16F887** microcontroller. This board is designed to facilitate rapid prototyping, testing, and hardware-software integration for embedded systems projects.

## 📝 Description

This repository contains all the hardware design files required to manufacture and assemble the PIC16F887 development board. The PCB and schematics were designed using **EasyEDA**. 

The board provides easy access to all GPIO pins, integrates essential power circuitry, and includes an ICSP (In-Circuit Serial Programming) header for seamless programming and debugging.

## ✨ Features

* **Microcontroller:** PIC16F887 (8-bit, 20 MHz max).
* **Power Supply:** [e.g., 5V DC input via Barrel Jack / USB Type-C], regulated via [e.g., LM7805].
* **Programming Interface:** Standard 6-pin ICSP header compatible with PICkit 3 / PICkit 4.
* **Oscillator:** [e.g., 8 MHz external crystal oscillator].
* **I/O Access:** All MCU pins broken out to standard 2.54mm (0.1") pitch male headers.
* **On-board Peripherals:** * [e.g., Reset button]
  * [e.g., Power LED indicator]
  * [e.g., 1x User-programmable LED on PIN_XX]

## 🛠️ Hardware Design (EasyEDA)

The project was developed in EasyEDA. 

## 📁 Repository Structure

```text
├── Hardware/
│   ├── Gerber_Files/      # .zip file ready for PCB manufacturing (e.g., JLCPCB)
│   ├── BOM/               # Bill of Materials (.csv)
│   ├── PickAndPlace/      # CPL/Centroid file for SMT assembly
│   └── Schematics/        # PDF version of the schematic diagram
├── Software/              # Example code or test routines (MPLAB X / XC8)
├── Images/                # Pictures and 3D renders of the board
└── README.md              # This documentation file
