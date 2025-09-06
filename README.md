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

## 📂 Project Structure


python-expense-tracker/
│── expense_tracker.py # Main program
│── README.md # Project documentation
│── .gitignore # Ignore unnecessary files


---

## 🚀 How to Run

1. **Clone the repository**
```bash
git clone https://github.com/<your-username>/python-expense-tracker.git
cd python-expense-tracker
