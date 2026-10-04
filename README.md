#mini projects
My beginner projects in c and python 
## c projects (c-projects/) 
- calculator.c: calculator with addition , subtraction , multiplication , division and more
  # Simple Calculator

A C program calculator that performs basic arithmetic operations on multiple numbers with calculation history tracking.

## 🎯 Features

- ➕ **Addition** - Add multiple numbers together
- ➖ **Subtraction** - Subtract multiple numbers sequentially
- ✖️ **Multiplication** - Multiply multiple numbers together
- ➗ **Division** - Divide multiple numbers with zero-check validation
- 📜 **Calculation History** - View all previous calculations
- 🔄 **Repeat Operations** - Perform multiple calculations in one session

## 💻 Technologies & Concepts

**Language:** C

**Concepts Used:**
- Functions (modular code)
- For loops (for iterating numbers)
- Do-while loops (menu loop)
- Switch-case statements
- If-else conditions
- Arrays (for history storage)
- Input/Output (scanf, printf)
- Float and Integer data types

## 🚀 How to Run

### Compile:
```bash
gcc -o calculator calculator.c
```

### Run:
```bash
./calculator
```

## 📋 Menu Options

1. **Addition** - Enter count of numbers, then input all numbers to add
2. **Subtraction** - Enter count of numbers, then input all numbers to subtract
3. **Multiplication** - Enter count of numbers, then input all numbers to multiply
4. **Division** - Enter count of numbers, then input all numbers to divide (with zero check)
5. **Calculation History** - Display all previous calculation results
6. **Exit Calculator** - Close the program

## 🎓 How It Works

### **Addition Function:**
- Takes count and first number as parameters
- Loops through remaining numbers
- Adds each number to the sum
- Returns total

### **History Tracking:**
- Each result is stored in `history[]` array
- `history_count` tracks number of calculations
- Can view all previous calculations anytime

## 🔒 Safety Features

- **Zero Division Check** - Division function checks if divisor is zero
- **History Array Limit** - Can store up to 100 calculations
- **Input Validation** - Handles multiple number inputs


## 💡 Future Enhancements

- Add modulus (%) operation
- Add power (^) operation
- Save history to a file
- Clear history option
- Input validation for invalid choices

## ✨ Author

**Anjali** - RGUKT Ongole Campus  
First-year Engineering Student

---

**Happy Calculating!** 🧮✨

# Movie Ticket Booking System

A comprehensive C program for booking movie theater tickets with integrated food menu ordering system.

## 🎯 Features

- 🎬 **Book Movie Tickets** - Select movies, choose seats (5 rows × 8 columns)
- 👀 **View All Seats** - Display theater layout in real-time
- 🍿 **Order Food** - Choose from food menu (popcorn, drinks, snacks, etc)
- 📋 **Booking History** - View all bookings with seat details and prices
- 📊 **Generate Report** - View occupancy percentage and total revenue
- 🔄 **Multiple Bookings** - Book multiple times in one session

## 💻 Technologies & Concepts

**Language:** C

**Concepts Learned:**
- 2D Arrays (for seat management)
- Loops: for, while, do-while
- Functions & function calls
- Switch-case statements
- If-else conditions
- String handling
- Array indexing & validation

## 🚀 How to Run

### Compile:
```bash
gcc -o booking booking.c
```

### Run:
```bash
./booking
```

## 📋 Menu Options

1. **Book a Seat** - Select movie, choose seats with row (A-E) and column (0-7)
2. **View All Seats** - Display current theater seating layout
3. **Order Food** - Choose from food menu and add to order
4. **Booking History** - Show all booked tickets with movie names and prices
5. **Generate Report** - Show total seats, booked seats, occupancy %, and total revenue
6. **Exit** - Close the program


## 🎓 What I Learned

- How to manage 2D arrays for seat tracking
- Using do-while loops for user input validation
- Implementing menu-driven applications
- Tracking multiple bookings with global arrays
- Calculating revenue and occupancy statistics
- String manipulation and formatting in C

## ✨ Author

**Anjali** - RGUKT Ongole Campus  
First-year Engineering Student

---

**Happy Booking!** 🎬🍿


## python projects
- rock, paper, scissors game
  # Rock Paper Scissors Game

A Python game where you play Rock, Paper, Scissors against the computer using random choice logic.

## 🎯 Features

- 🎮 **Play Against Computer** - Computer makes random choice
- 🏆 **Win/Lose Detection** - Game determines winner based on rules
- 📋 **Game Logic** - All possible combinations covered
- 🎲 **Random Selection** - Computer uses random module for fair play
- 📊 **Clear Output** - Shows player choice, computer choice, and result

## 💻 Technologies & Concepts

**Language:** Python

**Concepts Used:**
- Functions (modular code)
- Dictionaries (storing choices)
- Random module (computer choice)
- If-elif-else statements (game logic)
- String formatting (f-strings)
- Input/Output (input, print)

## 🚀 How to Run

### Run:
```bash
python rock_paper_scissors.py
```

## 🎮 Game Rules

- **Rock** beats Scissors (Rock smashes Scissors)
- **Paper** beats Rock (Paper covers Rock)
- **Scissors** beats Paper (Scissors cuts Paper)
- **Same Choice** = Tie


## 📋 How It Works

### **get_choice() Function:**
- Takes player input
- Generates random computer choice
- Returns dictionary with both choices

### **check_win() Function:**
- Compares player and computer choices
- Checks all win/loss/tie conditions
- Returns result message


## 💡 Future Enhancements

- Add loop to play multiple rounds
- Keep score of wins/losses/ties
- Add quit option
- Input validation (check for valid choices)
- Add Lizard & Spock options (extended version)
- Save game statistics to a file
- GUI interface using tkinter

### **Example Enhancement - Multiple Rounds:**
```python
while True:
    choices = get_choice()
    result = check_win(choices["player"], choices["computer"])
    print(result)
    
    play_again = input("\nPlay again? (yes/no): ")
    if play_again.lower() != "yes":
        break
```

## 🎓 What I Learned

- Using random module for computer AI
- Dictionary data structure for storing choices
- If-elif-else logic for game decisions
- String formatting with f-strings
- Function design for code reusability
- Game logic implementation

## ✨ Author

**Anjali** - RGUKT Ongole Campus  
First-year Engineering Student

---

**Have Fun Playing!** 🎮🎲


