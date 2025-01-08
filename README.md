# **Unit Converter**

A simple yet powerful C++ application for converting common units such as temperature, distance, and weight. Designed with a modular architecture and a dynamic, user-friendly interface.

---

## **Features**
- 🔄 **Dynamic Menu**  
  Navigate through an intuitive menu to select and perform unit conversions.

- 🌡️ **Supported Unit Conversions**  
  - **Temperature**: Convert between Celsius and Fahrenheit.  
  - **Distance**: Convert between Kilometers and Miles.  
  - **Weight**: Convert between Kilograms and Pounds.

- ✅ **Robust Input Validation**  
  Ensures all user inputs are valid, preventing errors and ensuring smooth operation.

---

## **Project Structure**
The application is organized into a modular structure for clarity and maintainability:

UnitConverter/ 
├── src/ 
│ ├── main.cpp # Main program file
│ ├── menu.cpp # Manages the dynamic menu 
│ ├── conversions.cpp # Implements the conversion 
functions 
│ ├── validation.cpp # Validates user input 
├── include/ 
│ ├── menu.h 
│ ├── conversions.h 
│ ├── validation.h 
├── Makefile # Script to build the project
