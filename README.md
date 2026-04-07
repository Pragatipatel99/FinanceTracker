# 💰 Console-Based Personal Finance Tracker (C++)

A powerful console-based application built using C++ to manage personal finances efficiently. This project demonstrates strong fundamentals of Object-Oriented Programming (OOP), file handling, and data management.

---

## 📌 Description

This application provides a complete command-line interface (CLI) for tracking income and expenses. Users can:

- Add transactions
- View all records
- Edit or delete transactions
- Generate financial summaries
- Filter data by category or date

All data is stored in a local `transactions.csv` file, ensuring persistence across sessions.

---

## 🚀 Core Features

### 🔹 Full CRUD Functionality
- **Create:** Add new transactions
- **Read:** View all transactions
- **Update:** Edit existing records
- **Delete:** Remove transactions

### 🔹 Financial Summary
- Total Income
- Total Expenses
- Net Balance

### 🔹 Advanced Filtering
- Filter by **Category**
- Filter by **Date Range**

### 🔹 Data Persistence
- Auto-save to `transactions.csv`
- Auto-load on startup

### 🔹 Error Handling
- Basic input validation to prevent crashes

---

## 🛠️ Technology Stack

- **Language:** C++
- **Libraries Used:**
  - iostream
  - fstream
  - sstream
  - vector
  - string
  - iomanip
  - limits
  - algorithm

---

## ▶️ How to Compile and Run

### 🔹 Step 1: Compile
```bash
g++ main.cpp -o FinanceTracker
