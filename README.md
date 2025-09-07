# coding-journey
my adventure with code
my first project
# 🧮 Simple C Calculator

A **basic calculator program in C** that runs in the terminal.  
It supports the following operations:
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Modulo (`%`)

This project is a great starting point for beginners learning **C programming**, **switch statements**, and **basic arithmetic operators**.

⚠️ Error Handling

Division by Zero → Prints an error message instead of crashing.

Modulo by Zero → Prints an error message instead of crashing.

Invalid Operator → Prints "Error: Invalid operator."

📖 Concepts Covered

#include <stdio.h> → Standard I/O library

switch-case → Control flow in C

Typecasting → (int)n1 % (int)n2 for modulo operation

Error handling for invalid input

# 🎯 Number Guessing Game in C

A simple **Number Guessing Game** written in C where the computer randomly chooses a number between 1 and 100, and the player has to guess it within limited attempts.

---

## 📌 Features
- Random number generation using `rand()` seeded with current time.
- Player gets **10 attempts** to guess the number.
- Hints provided:
  - **Too high** if the guess is larger than the number.
  - **Too low** if the guess is smaller than the number.
- Game ends when:
  - The player guesses correctly 🎉
  - OR runs out of attempts 😢

---

## 🖥️ How It Works
1. The program picks a **random number between 1 and 100**.
2. The user enters guesses one by one.
3. The game gives feedback after every guess.
4. The game ends when the number is guessed correctly or attempts are finished.

---

📄 README.md
# 💰 Python Expense Tracker

This is my **first ever  project** 🎉  
This is my **first ever Python project** 🎉  
A simple **command-line expense tracker** where you can:
- Add expenses 💵
- List all expenses 📋
- View total expenses ➕
- Filter expenses by category 🔍
- Exit the program ❌

---
 # 🎲 Dice Rolling Game (C)

A fun and simple **command-line dice rolling game** written in **C**.  
Every time you roll, you get a random number between **1 and 6**.  
You can keep rolling until you decide to stop.  

---

## 🚀 Features
- Generates a random dice roll (1–6) 🎲  
- Lets you roll again with **Y/y**  
- Option to quit with **N/n**  
- Beginner-friendly project for learning **loops, randomness, and user input**  

---

## 🖥️ How to Run


(On Windows use dice_game.exe)

📝 Example Gameplay
scss
Copy code
Welcome to the dice rolling Game!
you rolled 4
roll again(y/n): y
you rolled 2
roll again(y/n): y
you rolled 6
roll again(y/n): n
Thanks for playing

## 📖 Concepts Covered
rand() and srand(time(0)) → random number generation

do { ... } while() loop → repeat until user quits

scanf(" %c", &choice) → handle user input

Basic control flow and loops in C

