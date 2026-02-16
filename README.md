# 42 C++ Modules (cpp00 - cpp09)

[![42 School](https://img.shields.io/badge/42-School-black?style=flat-square&logo=42)](https://42.fr/)
[![C++](https://img.shields.io/badge/C++-98/11-blue?style=flat-square&logo=c%2B%2B)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)](LICENSE)

&gt; A comprehensive journey through modern C++ programming, covering fundamental concepts to advanced object-oriented design, templates, and the Standard Template Library (STL).

## 📚 Table of Contents

- [Overview](#overview)
- [Projects](#projects)
- [Repository Structure](#repository-structure)
- [Getting Started](#getting-started)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Learning Outcomes](#learning-outcomes)
- [Contributing](#contributing)
- [License](#license)

## 🎯 Overview

This repository contains my C++ projects from the [42 School](https://42.fr/) curriculum. Each module builds upon the previous one, creating a structured learning path from basic syntax to advanced C++ features. The projects emphasize **clean code**, **memory safety**, and **modern C++ best practices**.

## 🚀 Projects

| Module | Topic | Key Concepts |
|--------|-------|--------------|
| **cpp00** | Basic C++ | Syntax, variables, functions, simple classes, compilation |
| **cpp01** | Constructors & Operators | Constructors, destructors, copy semantics, operator overloading |
| **cpp02** | Inheritance & Polymorphism | Single inheritance, virtual functions, polymorphism |
| **cpp03** | Encapsulation & Class Design | Access modifiers, getters/setters, proper class design |
| **cpp04** | Advanced Inheritance | Multiple inheritance, virtual inheritance, object slicing |
| **cpp05** | Templates & Exceptions | Function/class templates, exception handling, generic programming |
| **cpp06** | Advanced Templates & Memory | Smart pointers, dynamic allocation, memory-safe code |
| **cpp07** | STL Containers | `vector`, `map`, `set`, iterators, algorithms |
| **cpp08** | Polymorphic Containers & RTTI | Heterogeneous storage, runtime type identification, casting |
| **cpp09** | Final Module | Comprehensive integration of all concepts |

## 📁 Repository Structure


42-cpp-modules/
├── cpp00/              # Basic C++ fundamentals
├── cpp01/              # Object lifecycle management
├── cpp02/              # Inheritance basics
├── cpp03/              # Encapsulation patterns
├── cpp04/              # Complex inheritance
├── cpp05/              # Generic programming
├── cpp06/              # Memory management
├── cpp07/              # STL mastery
├── cpp08/              # Advanced polymorphism
├── cpp09/              # Capstone project
├── .gitignore
├── LICENSE
└── README.md  


### Module Structure

Each `cppXX/` directory follows this organization:


cppXX/
├── ex00/               # Exercise 0
├── ex01/               # Exercise 1
├── ex02/               # Exercise 2
│   ├── include/        # Header files (.hpp)
│   ├── src/            # Source files (.cpp)
│   ├── Makefile        # Build configuration
│   └── README.md       # Exercise-specific notes (optional)
└── ...


## 🛠 Getting Started

### Prerequisites

- **Compiler**: `clang++` or `g++` with C++98/C++11 support
- **Make**: GNU Make 3.81 or higher
- **OS**: Linux, macOS, or compatible Unix-like system
- **Git**: For cloning the repository

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/42-cpp-modules.git
   cd 42-cpp-modules


| Command       | Description                        |
| ------------- | ---------------------------------- |
| `make`        | Compile the project                |
| `make clean`  | Remove object files                |
| `make fclean` | Remove object files and executable |
| `make re`     | Rebuild from scratch               |



Usage Example
bash
Copy
# Navigate to cpp01 (Constructors & Operators)
cd cpp01/ex00

# Build
make

# Run
./zombie

# Clean up
make fclean

✨ Features
Modular Design: Each module is self-contained and builds upon previous concepts
Memory Safety: Emphasis on RAII, smart pointers, and leak-free code
Modern C++: Utilizes contemporary best practices within C++98/11 constraints
Comprehensive Testing: Each exercise includes test cases and edge case handling
Clean Architecture: Well-organized headers, implementation separation, and clear interfaces

🎓 Learning Outcomes
After completing these modules, you will master:
✅ Object-Oriented Programming: Inheritance, polymorphism, encapsulation
✅ Memory Management: Stack vs heap, RAII, smart pointers
✅ Generic Programming: Template metaprogramming and type safety
✅ STL Proficiency: Container selection, algorithm usage, iterator categories
✅ Exception Safety: Strong exception guarantees and error handling
✅ Code Organization: Header guards, namespaces, compilation units

🤝 Contributing
While this is a personal learning repository, suggestions and improvements are welcome!
Fork the repository
Create a feature branch (git checkout -b feature/improvement)
Commit your changes (git commit -am 'Add some feature')
Push to the branch (git push origin feature/improvement)
Open a Pull Request

📝 License
This project is licensed under the MIT License - see the LICENSE file for details.

🙏 Acknowledgments
42 School for the comprehensive curriculum
The C++ community for excellent documentation and resources
Bjarne Stroustrup for creating C++
