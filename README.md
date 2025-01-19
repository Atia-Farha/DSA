# DSA with C++

## Introduction
- Developed by **Bjarne Stroustrup** in _1985_.
- An extension of C.
- Object oriented language (Supports classes and objects).
- Cross-platform language (Portable).
- High performance.
- Case-sensitive.

## Key Features of C++
- **Object-Oriented Programming (OOP):** Supports classes, objects, inheritance, polymorphism, encapsulation, and abstraction.
- **Low-Level and High-Level:** Combines features of both high-level and low-level languages.
- **Platform Independent:** Code can be compiled and run on different platforms.
- **Standard Template Library (STL):** A collection of template classes and functions for common data structures and algorithms.
- **Performance:** Faster execution compared to other high-level languages.

## Difference between C and C++
C++ supports classes and objects, while C does not.

## Usage
- Operating systems
- Embedded systems
- GUI-based application
- Game Development

---

> **Text editor:** to write C++ code.<br>Example: Notepad, Visual Studio Code.

> **Compiler:** to translate the code into a language that the computer will understand.<br>Example: GCC.

> **IDE (Integrated Development Environment):** to edit AND compile the code.<br>Example: Code::Blocks, Eclipse, and Visual Studio.

---

## Code line explanation
``` c
#include <iostream>   // Header file for input/output functions
using namespace std;  // Namespace declaration

int main() {          // Entry point of the program
    cout << "Hello, World!" << endl;  // Output statement
    return 0;          // Return statement
}
```
1. **Header files** add functionality to C++ programs.
1. `#include`: Preprocessor directive to include libraries.
2. `using namespace std` means that we can use names for objects and variables from the standard library. Avoids using std:: prefix for standard functions.
3. `int main()`: Main function, execution starts here.
4. `cout` is an **object** used together with the insertion operator (`<<`) to output text.
5. Any code inside its curly brackets `{}` will be executed.

### Without `using namespace std`
```c
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```
> `std` is a **keyword**.

## Statement
A **computer program** is a list of "instructions" to be "executed" by a computer.
In a programming language, these programming instructions are called **statements**.

### Example
```c
cout << "Hello World!";
cout << "Have a good day!";
return 0;
```

- Every C++ statement ends with a semicolon `;`. 
- The statements are executed, one by one, in the same order as they are written.

## Output


### Escape Sequence
| Escape Sequence | Description                               | Example                             | Output             |
|------------------|-------------------------------------------|-------------------------------------|--------------------|
| `\n`            | Inserts a newline                        | `std::cout << "Hello\nWorld";`      | Hello              |
|                  |                                           |                                     | World              |
| `\t`            | Inserts a horizontal tab                 | `std::cout << "Hello\tWorld";`      | Hello    World     |
| `\\`            | Inserts a backslash character (`\`)       | `std::cout << "C:\\path";`          | C:\path            |
| `\"`            | Inserts a double quote character (`"`)    | `std::cout << "\"Hello\"";`         | "Hello"            |
| `\'`            | Inserts a single quote character (`'`)    | `std::cout << "It\'s fine.";`       | It's fine.         |
| `\b`            | Inserts a backspace                      | `std::cout << "Hello\bWorld";`      | HellWorld          |
| `\r`            | Inserts a carriage return                | `std::cout << "Hello\rWorld";`      | World              |
| `\a`            | Produces an alert (beep sound)            | `std::cout << "\a";`                | *Beep sound*       |
| `\v`            | Inserts a vertical tab                   | `std::cout << "Hello\vWorld";`      | Hello              |
|                  |                                           |                                     |      World         |
| `\f`            | Inserts a form feed                      | `std::cout << "Hello\fWorld";`      | Hello              |
|                  |                                           |                                     |      World         |
| `\?`            | Inserts a question mark (`?`)             | `std::cout << "What\?";`            | What?              |
| `\ooo`          | Inserts a character using octal value    | `std::cout << "\101"; // Prints A`  | A                  |
| `\xhh`          | Inserts a character using hex value      | `std::cout << "\x41"; // Prints A`  | A                  |

> Another way to insert a new line, is with the `endl` **manipulator**.

## Data Types

### Basic Data Types:
- `int`: Integer numbers (e.g., 5, -3).
- `float`: Floating-point numbers (e.g., 5.67).
- `double`: Double-precision floating-point numbers.
- `char`: Single characters (e.g., 'a').
- `bool`: Boolean values (true or false).


### Derived Data Types:
array, pointer, reference.

### User-Defined Data Types:
class, struct, enum, typedef.

## Control Structures

### Conditional Statements:
`if`, `if-else`, `switch`

Example:
```c
int x = 5;
if (x > 0) {
    cout << "Positive" << endl;
} else {
    cout << "Negative" << endl;
} 
```

### Loops:
`for`, `while`, `do-while`

## Functions
A block of code designed to perform a specific task.

Syntax:
```c
returnType functionName(parameters) {
    // Code block
    return value; // Optional
}
```

### Types of Functions:
- Built-in Functions (e.g., `sqrt()`, `abs()`).
- User-Defined Functions.
- Inline Functions.

## Object-Oriented Programming (OOP)
- **Class**: a blueprint for objects.
- **Object** is an instance of a class.

Syntax:
```c
class MyClass {
public:
    int x;           // Data member
    void display() { // Member function
        cout << "Value: " << x << endl;
    }
};
```

### Key OOP Features:
- **Encapsulation**: Binding data and methods into a single unit (class).
- **Inheritance**: Acquiring properties of a base class by a derived class.
- **Polymorphism**: Ability to use the same interface for different types.
- **Abstraction**: Hiding implementation details and showing only functionality.