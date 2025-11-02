# 🎬 Movie Ticket Booking System (C Program)

[![License](https://img.shields.io/badge/License-Apache--2.0-blue.svg)](LICENSE)
![Platform](https://img.shields.io/badge/Platform-Linux-lightgrey)
![Status](https://img.shields.io/badge/Status-Active-success)
![Contributions](https://img.shields.io/badge/Contributions-Welcome-brightgreen)
![GitHub stars](https://img.shields.io/github/stars/roshhellwett/Movie_Ticket_Counter?style=social)

A fun and interactive **C program** that simulates a **movie ticket booking system** right in your terminal!  
Users can select a movie, choose the number of seats, and get a total bill with a 10% tax — all through a clean CLI experience. 🍿

---

## 🏷️ Overview
| 🎥 Feature | 💡 Description |
|-------------|----------------|
| 📜 Movie List | Displays available movies with ticket prices |
| 🎟️ Seat Selection | Lets user choose the number of seats |
| 💰 Total Calculation | Computes total cost + 10% tax |
| 🧾 Ticket Printout | Displays formatted movie ticket with total bill |
| ⚙️ Modular Design | Built using functions and structured logic |

---

## 📖 Description
This project demonstrates **core C programming concepts** — including **functions**, **switch statements**, **user input handling**, and **basic arithmetic**.  
Perfect for beginners exploring how to build a real-world console application using structured programming.

---

## 🧠 Concepts Used
- 🔹 Functions for modular code  
- 🔹 `switch` statements for movie selection  
- 🔹 User input with `scanf`  
- 🔹 Conditional logic  
- 🔹 Arithmetic operations for tax calculation  

---

## 💻 How to Run
1. **Clone the Repository**
   ```bash
   git clone https://github.com/roshhellwett/Movie_Ticket_Counter.git
   cd Movie_Ticket_Counter
   gcc movie_ticket.c -o movie_ticket
   ./movie_ticket


## 📂 Project Structure
```bash
Movie_Ticket_Counter/
│
├── movie_ticket.c       # Main program source code
├── README.md            # Project documentation
└── LICENSE              # License file (optional)

## 🧾 Example Output
🎬 MOVIE TICKET BOOKING SYSTEM 🎟️

1. Avatar 2 - $12.50
2. Avengers - $11.00
3. Jurassic World - $10.00

Select movie (1-3): 2
Enter number of seats: 3

----------------------------------------
MOVIE SELECTED : Avengers
NO. OF SEATS   : 3
TOTAL BILL (with 10% tax): $36.30
----------------------------------------

🎉 THANK YOU FOR BOOKING WITH US! 🎉
