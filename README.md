# Digit Counter & Number Reverser

This program allows the user to enter an integer and then:

* **Counts how many digits** the number has
* **Reverses the number** (e.g., 123 → 321, -456 → 654)

It demonstrates basic use of:

* Functions
* Loops
* Arithmetic operations
* Input/output
* Working with negative numbers

---

##  How it works

### **1. Digit Counting**

The function `Count()`:

* Handles zero as a special case
* Converts negative numbers to positive
* Counts digits by dividing by 10 until the number becomes 0

### **2. Reversing the Number**

The program:

* Extracts each digit with `% 10`
* Builds the reversed number step by step
* Works correctly with negative numbers (digit count still correct)

## Notes

This is an early programming exercise focusing on loops, functions, and integer manipulation.
It’s simple but a strong foundational project.
