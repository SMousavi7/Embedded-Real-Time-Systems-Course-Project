# Embedded & Real-Time Systems Course Project

A model-based embedded systems project developed for the **Fundamentals of Embedded and Real-Time Systems** course.

This project models a smart home heating system using **MATLAB Simulink**, **Stateflow**, and related MathWorks tools. The system simulates temperature dynamics for four interconnected rooms controlled by two movable heaters while satisfying real-time and safety requirements.

## Overview

The objective of the project is to design, implement, and verify an embedded control system capable of maintaining comfortable room temperatures while dynamically relocating heaters based on the thermal conditions of the house.

The complete development process follows the **V-Model** and adopts a **Model-Based Design (MBD)** workflow.

## Features

* Multi-room thermal system simulation
* Dynamic heater allocation
* Thermostat controller implemented in Stateflow
* Safety Gateway architecture
* Requirement allocation and traceability
* System-level simulation
* Model verification and validation
* Black-box and white-box testing
* Test coverage analysis

## Technologies

* MATLAB
* Simulink
* Stateflow
* Simulink Requirements
* System Composer
* Simulink Test
* Embedded Coder

## System Architecture

The project consists of four main components:

* **Room Heating Model**

  * Simulates the thermal dynamics of four connected rooms.

* **Thermostat Controller**

  * Decides when heaters should be turned on or off.
  * Relocates heaters between rooms based on configurable thresholds.

* **Safety Gateway**

  * Verifies control commands before they are applied to the physical system.

* **Simulation Environment**

  * Connects all components and evaluates the controller under different operating conditions.

## Simulation

Several simulations were performed using different controller parameters to evaluate:

* Temperature stability
* Heater relocation behavior
* Control performance
* Requirement satisfaction
* Safety properties

## Repository Contents

```text
models/
requirements/
generated code/
tests/
reports/
images/
README.md
```

## Results

The repository includes simulation outputs illustrating:

* Room temperatures over time
* Heater activation signals
* Heater locations
* System architecture
* Stateflow controller
* Simulink models
* Test coverage reports

## Educational Purpose

This repository was developed as part of the Embedded and Real-Time Systems course and demonstrates the application of Model-Based Design techniques for embedded control systems, verification, and safety-oriented development.
