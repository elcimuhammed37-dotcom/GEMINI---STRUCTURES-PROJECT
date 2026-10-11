C++ RPG Character Management System

A lightweight, console-based Role Playing Game (RPG) character management system written in C++. This project was developed to demonstrate the practical use of struct data structures, arrays, and pass-by-reference function calls in C++ to manage game entities.

🚀 Features

Character Creation: Initialize characters with distinct names, health points, and levels.

Inventory System: Each character has a localized inventory array capable of holding multiple items (e.g., weapons, armor) with specific power values.

Combat Mechanics: Simulate taking damage and updating character statistics dynamically.

Healing & Progression: Built-in functions for restoring health completely and leveling up characters.

Preset Generation: Quickly spawn preset characters (like boss entities or default avatars) using factory functions.

🧠 Data Structures & Terminology

Note: The core source code utilizes Turkish naming conventions for variables and functions. Below is a mapping of the core components for international developers:

Structs

Esya (Item): Represents an in-game item.

ad (Name)

guc (Power/Damage)

Istatistik (Statistics): Represents character stats.

can (Health Points - HP)

seviye (Level)

Karakter (Character): The main entity holding the stats and an array of Esya (inventory).

Core Functions

bilgiYazdir(Karakter k): Prints out the complete status of the character, including stats and inventory items.

hasarAL(Karakter &k, int hasar): Subtracts health points based on incoming damage (Uses pass-by-reference).

medic(Karakter &k): Fully restores the character's health to 100.

seviyeYüksel(Karakter &k, int upgrade): Increases the character's level.

newItem(Karakter &k, string name, int power, int slot): Equips a new item to the specified inventory slot.

creative(): A factory function that returns a pre-configured, high-level character (e.g., "tyroon").

🛠️ Getting Started

Prerequisites

To run this project, you will need a standard C++ compiler (e.g., GCC, Clang, or MSVC via Visual Studio).

Compilation

Clone the repository to your local machine.

Navigate to the project directory.

Compile the source file (e.g., Kaynak.cpp):

g++ Kaynak.cpp -o rpg_system


Run the executable:

./rpg_system


📝 License

This project is licensed under the MIT License. You are free to use, modify, and distribute this software as you see fit.
