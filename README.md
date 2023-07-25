https://github.com/Serkhani/CPEN208_Software_Engineering/assets/66341820/d85b2dd6-f6fb-4125-b7d3-ba5fc002368b
Elevator Simulator
Elevator Simulator Demo (Replace link_to_demo.gif with an actual link to a demo of your elevator simulator)

The Elevator Simulator is a C++ application built using the Qt framework for our final course project. The project aims to simulate the operation and behavior of an elevator system. This README file provides an overview of the project, its features, and instructions on how to build and run the simulator.

Table of Contents
Features
Prerequisites
Installation
Usage
Contributing
License
Features
Elevator Simulation: The simulator provides a visual representation of an elevator system, including multiple floors, elevator cabins, and buttons for calling the elevators.

Multi-Cabin Support: The elevator system supports multiple elevator cabins that can move independently between floors.

User Interaction: Users can interact with the elevator system by pressing floor buttons to call an elevator, and cabin buttons to select a destination floor.

Realistic Behavior: The simulator emulates realistic elevator behavior, such as cabin acceleration, deceleration, and door open/close delays.

Configurable Settings: The simulator allows customization of parameters like the number of floors, elevator speed, door open/close times, etc.

Status Display: Information about the current status of each elevator cabin, such as its location and direction, is displayed in real-time.

Prerequisites
To build and run the Elevator Simulator, you need to have the following tools and libraries installed:

C++ Compiler (e.g., GCC, Clang, MSVC, etc.)
Qt Framework (Qt 5 or later)
Qt Creator
Qt Designer
Installation
Clone the Repository: Begin by cloning this GitHub repository to your local machine using the following command:

bash
Copy code
git clone https://github.com/your-username/elevator-simulator.git
Open the Project: Launch Qt Creator and open the elevator-simulator.pro project file.

Build the Project: Use Qt Creator to build the project, which will generate the executable for the elevator simulator.

Usage
Run the Simulator: After building the project, run the executable to start the elevator simulator.

Simulation Interface: The simulator's main window will display the elevator cabins, floor buttons, and cabin buttons.

Calling Elevators: Click on the floor buttons to call an elevator to that floor.

Selecting Destinations: Once inside an elevator cabin, press the cabin buttons to select the desired destination floor.

Observing Status: Observe the real-time status of each elevator cabin, including its current floor and direction of movement.

Configuring Settings: If necessary, explore the option to customize various settings in the simulator through the interface or configuration files.