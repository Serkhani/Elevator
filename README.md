# Elevator Simulator
The Elevator Simulator is a C++ application built using the [Qt](https://qt.io) framework for our final course project. The project aims to simulate the operation and behavior of an elevator system. This README file provides an overview of the project, its features, and instructions on how to build and run the simulator.

> Elevator Simulator Demo (Replace link_to_demo.gif with an actual link to a demo of your elevator simulator)

https://github.com/Serkhani/CPEN208_Software_Engineering/assets/66341820/d85b2dd6-f6fb-4125-b7d3-ba5fc002368b

# Features
**Elevator Simulation:** The simulator provides a visual representation of an elevator system, including multiple floors, elevator cabins, and buttons for calling the elevators.

**Multi-Cabin Support:** The elevator system supports multiple elevator cabins that can move independently between floors.

**User Interaction:** Users can interact with the elevator system using the following steps:
 - **Summoning the Elevator:** Click the buttons on the left dock widget (Summon Panel) to summon the elevator to a specific floor.
 - **Waiting for the Elevator:** Wait until the elevator cabin arrives at the summoned floor.
 - **Selecting Destination:** After entering the elevator cabin, click on the desired floor button on the right panel to select the destination floor.

**Realistic Behavior:** The simulator emulates realistic elevator behavior, such as cabin acceleration, deceleration, and door open/close delays.

<!-- Configurable Settings: The simulator allows customization of parameters like the number of floors, elevator speed, door open/close times, etc. -->

<!-- Status Display: Information about the current status of each elevator cabin, such as its location and direction, is displayed in real-time. -->

# Prerequisites
To build and run the Elevator Simulator, you need to have the following tools and libraries installed:
- C++ Compiler (e.g., GCC, Clang, MSVC, etc.)
- [Qt](https://qt.io) 6.4.2 MinGW 64-bit
- [Qt](https://qt.io) Creator
- [Qt](https://qt.io) Designer

# Installation
**Clone the Repository:**
> Begin by cloning this GitHub repository to your local machine using the following command:
```bash
git clone https://github.com/your-username/elevator-simulator.git
```

**Open the Project:**
> Launch [Qt](https://qt.io) Creator and open the `elevator.pro` project file.

**Build the Project:**
> Use [Qt](https://qt.io) Creator to build the project, which will generate the executable for the elevator simulator.

# Usage
**Run the Simulator:** After building the project, run the executable to start the elevator simulator.

**Summon the Elevator:** Click on the floor buttons in the left dock widget (Summon Panel) to call an elevator to that specific floor.

**Wait for the Elevator:** Observe the status display to see the real-time movement of the elevators. Wait for the summoned elevator to arrive at the desired floor.

**Select Destination:** Once inside the elevator cabin, use the buttons on the right panel to select the desired destination floor.

**Observing Status:** Monitor the real-time status of each elevator cabin, including its current floor and direction of movement.

**Configuring Settings:** If necessary, explore the option to customize various settings in the simulator through the interface or configuration files.


Built with [Qt](https://qt.io) website
