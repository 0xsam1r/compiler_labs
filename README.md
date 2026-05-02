# Simple Compiler (Recursive Descent Parser)

This project is a simple compiler implementation written in C++ that demonstrates the basics of:

- Lexical Analysis (Tokenization)
- Syntax Analysis (Recursive Descent Parsing)
- Expression Evaluation (Infix → Postfix conversion)

---

# 📌 Features

✔ Supports arithmetic expressions  
✔ Handles `+` and `-` operators  
✔ Processes digits (basic version)  
✔ Converts infix expressions to postfix notation  
✔ Implements recursive descent parsing

---

# 🧱 Compiler Structure

The compiler is divided into two main parts:

## 1. Lexical Analysis
Converts input characters into tokens.

Example:

Input: 5 + 2
Tokens: NUM + NUM


---

## 2. Syntax Analysis (Parser)

Implements grammar rules:

``` rules
expr → term rest
rest→  +term | -term| ϵ
term → digit
digit→ 0|1|2|3|4|5|6|7|8|9
```
---

# ⚙️ Core Functions

## match(t)
Ensures current input matches expected token.

## term()
Processes digits and prints operands.

## expr()
Handles + and - operations and builds postfix output.

## rest()
Handles repetition of operators.

---

# 🔄 Example Execution

### Input:
```bash
5+2
```

### Output (Postfix):
```
52+
```

---

# 🚀 How to Run

```bash
make main
./main
```

Then enter expression in input.
