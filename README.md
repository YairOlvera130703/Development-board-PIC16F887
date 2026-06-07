# PIC16F887 Development Board

![Hardware](https://img.shields.io/badge/Hardware-EasyEDA-blue)
![Microcontroller](https://img.shields.io/badge/MCU-PIC16F887-red)

A custom development and prototyping board based on the Microchip **PIC16F887** microcontroller. This board is designed to facilitate rapid prototyping, testing, and hardware-software integration for embedded systems projects.

## 📝 Description

This repository contains all the hardware design files required to manufacture and assemble the PIC16F887 development board. The PCB and schematics were designed using **EasyEDA**. 

The board provides easy access to all GPIO pins, modernizes power delivery with a USB Type-C connector, and features a surface-mount (SMD) architecture for a compact form factor. It also includes built-in LEDs and push buttons for immediate I/O testing without the need for external breadboarding.

## 📸 Board 3D View

<p align="center">
  <img src="image_3baa8a.png" alt="3D View of the PIC16F887 Development Board" width="500">
</p>

## ✨ Features

* **Microcontroller:** PIC16F887 in a TQFP-44 SMD package.
* **Power Supply:** 5V input via modern USB Type-C connector.
* **Programming Interface:** 6-pin ICSP header (LVP, PGC, PGD, GND, VCC, MCLR) located at the top for easy access.
* **Oscillator:** On-board external crystal oscillator.
* **I/O Access:** Extensive pin breakouts along the sides via standard 2.54mm pitch headers, providing access to PORTA, PORTB, PORTC, PORTD, and PORTE, along with extra GND and 5V pins.
* **On-board Peripherals:** * 1x Dedicated `RESET` push button.
  * 3x User-programmable push buttons connected to pins **RC0**, **RC1**, and **RC2**.
  * 6x User-programmable indicator LEDs connected to pins **RD0** through **RD5**.

## 🛠️ Hardware Design (EasyEDA)

The project was developed in EasyEDA. You can view, clone, or edit the project directly through the EasyEDA web editor.

* **EasyEDA Project Link:** [Insert your EasyEDA public project link here]

## 📁 Repository Structure

```text
├── Hardware/
│   ├── Gerber_Files/      # .zip file ready for PCB manufacturing (e.g., JLCPCB)
│   ├── BOM/               # Bill of Materials (.csv)
│   ├── PickAndPlace/      # CPL/Centroid file for SMT assembly
│   └── Schematics/        # PDF version of the schematic diagram
├── Software/              # Example code or test routines (CCS C Compiler)
├── Images/                # Pictures and 3D renders of the board
└── README.md              # This documentation file
