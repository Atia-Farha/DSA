# DSA with C++

## Introduction
- Object oriented language (Supports classes and objects).
- Cross-platform language (Portable).
- Developed by _Bjarne Stroustrup_.
- An extension of C.
- High performance.
- Case-sensitive.

## Difference between C and C++
C++ supports classes and objects, while C does not.

## Usage
- Operating systems
- Graphical User Interfaces
- Embedded systems
- Game Development

---

> **Text editor:** to write C++ code.<br>Example: Notepad, Visual Studio Code.

> **Compiler:** to translate the code into a language that the computer will understand.<br>Example: GCC.

> **IDE (Integrated Development Environment):** to edit AND compile the code.<br>Example: Code::Blocks, Eclipse, and Visual Studio.

---

## Code line explanation
``` c
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```
1. `#include <iostream>` is a **header file** library that lets us work with input and output objects, such as `cout`, `cin`. Header files add functionality to C++ programs.
2. `using namespace std` means that we can use names for objects and variables from the standard library.
3. `int main()` is the main **function**.
4. Any code inside its curly brackets `{}` will be executed.
5. `cout` is an **object** used together with the insertion operator (`<<`) to output/print text.
6. `return 0;` ends the **main function**.

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
| Escape Sequence | Description                               | Example                             |
|------------------|-------------------------------------------|-------------------------------------|
| `\\`            | Inserts a backslash character (`\`)       | `std::cout << "C:\\path";`          |
| `\'`            | Inserts a single quote character (`'`)    | `std::cout << "It\'s fine.";`       |
| `\"`            | Inserts a double quote character (`"`)    | `std::cout << "\"Hello\"";`         |
| `\?`            | Inserts a question mark (`?`)             | `std::cout << "What\?";`            |
| `\a`            | Produces an alert (beep sound)            | `std::cout << "\a";`                |
| `\b`            | Inserts a backspace                      | `std::cout << "Hello\bWorld";`      |
| `\f`            | Inserts a form feed                      | `std::cout << "Hello\fWorld";`      |
| `\n`            | Inserts a newline                        | `std::cout << "Hello\nWorld";`      |
| `\r`            | Inserts a carriage return                | `std::cout << "Hello\rWorld";`      |
| `\t`            | Inserts a horizontal tab                 | `std::cout << "Hello\tWorld";`      |
| `\v`            | Inserts a vertical tab                   | `std::cout << "Hello\vWorld";`      |
| `\ooo`          | Inserts a character using octal value    | `std::cout << "\101"; // Prints A`  |
| `\xhh`          | Inserts a character using hex value      | `std::cout << "\x41"; // Prints A`  |

> Another way to insert a new line, is with the `endl` **manipulator**.