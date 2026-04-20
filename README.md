# 🧮 C Calculator using `extern` and Global Variables

## 📌 Overview

This project is a simple **menu-driven calculator** written in C.
It is built primarily for **self-learning purposes** to understand core C concepts like:

* Global variables
* `extern` keyword
* Multi-file project structure
* Basic arithmetic operations

---

## 🎯 Features

* Addition
* Subtraction
* Multiplication
* Division (with zero-check)
* Modulus (with zero-check)
* Menu-driven interface
* Input validation

---

## 📁 Project Structure

```
calculator/
├── main.c         # Handles user input and menu
├── operations.c   # Contains all calculation logic
├── globals.h      # Shared variables and function declarations
```

---

## 🧠 Key Concepts Explained

### 🔹 Global Variables

Variables declared outside functions and shared across files.

```c
int a, b, result;
```

---

### 🔹 `extern` Keyword

Used to declare variables that are defined in another file.

```c
extern int a, b, result;
```

👉 It allows multiple files to use the same variable.

---

### 🔹 Header File (`.h`)

Used to share declarations across files.

```c
#ifndef GLOBALS_H
#define GLOBALS_H

extern int a, b, result;

int add(int, int);
int sub(int, int);
int mul(int, int);
int dev(int, int);
int mod(int, int);

#endif
```

---

## ⚙️ How It Works

1. `main.c` takes user input and calls functions
2. `operations.c` performs calculations
3. `globals.h` connects both using `extern`

---

## ▶️ How to Compile and Run

```bash
gcc main.c operations.c -o calc
./calc
```

---

## 🧪 Sample Output

```
0.Enter a and b
1.addition
2.substract
3.multiply
4.devide
5.modulus
6.Exit

Enter choice: 0
Enter a: 10
Enter b: 5

Enter choice: 1
Addition = 15
```

---

## ⚠️ Important Notes

* Only **one file should define global variables**
* Other files should use `extern`
* Division and modulus handle **zero division errors**

---

## ❌ Common Mistakes

* Defining global variables in multiple files
* Forgetting `extern` in header
* Not using header guards (`#ifndef`)

---

## 🚀 Future Improvements

* Add more operations (power, square root)
* Convert to **C++ class-based design**
* Remove global variables (better design)
* Add input validation for non-integer values

---

## 🎯 Key Takeaway

```
extern → declare shared variable
global → define once
header → connect files
```

---

## 👨‍💻 Author

**Roshan Mallick**

---

## 📚 Note

This project is created for **learning and practice purposes** to strengthen understanding of multi-file programming and memory handling in C.

---

