# 🚦 Smart Traffic Management System

## 📌 Overview
This is a **C++ Object-Oriented Programming (OOPs) project** that simulates a **Smart Traffic Management System**. It models traffic lights and vehicle behavior based on real-world traffic rules.

## 🛠 Features
- ✅ **Traffic Light Simulation** (Red, Yellow, Green)
- ✅ **User Input for Light Control**
- ✅ **Vehicles React to Light Changes**
- ✅ **Modular OOP Design (Classes & Objects)**

## 👤 OOP Principles Used
### **1. Encapsulation**
Encapsulation is achieved by using classes with private and public access modifiers. The internal data of `TrafficLight` and `Vehicle` classes is hidden from direct access, ensuring data integrity.

### **2. Abstraction**
The project abstracts complex traffic behavior into simple methods like `changeLight()` and `reactToLight()`, hiding implementation details from the user.

### **3. Inheritance**
If extended, a `SmartTrafficLight` class can inherit properties from the `TrafficLight` base class, reusing and extending functionality.

### **4. Polymorphism**
Polymorphism allows different vehicle types (e.g., `Car`, `Bike`, `Truck`) to override the `reactToLight()` method, providing specialized behavior for different vehicles.

## 👤 Folder Structure
```
Smart-Traffic-System/
│── src/
│   ├── main.cpp        # Main program logic
│   ├── TrafficLight.h  # TrafficLight class header
│   ├── TrafficLight.cpp # TrafficLight class implementation
│   ├── Vehicle.h       # Vehicle class header
│   ├── Vehicle.cpp     # Vehicle class implementation
│── README.md           # Project documentation
│── .gitignore          # Git ignore file
│── Makefile            # (Optional) Compilation automation
```

## 🎯 How to Run the Project
### **1️⃣ Clone the Repository**
```sh
git clone https://github.com/your-username/Smart-Traffic-System.git
cd Smart-Traffic-System
```
### **2️⃣ Compile the Code**
```sh
g++ src/main.cpp src/TrafficLight.cpp src/Vehicle.cpp -o traffic_system
```
### **3️⃣ Run the Program**
```sh
./traffic_system
```

## 📸 Example Output
```
Enter Traffic Light Color (1: RED, 2: YELLOW, 3: GREEN): 3
🚦 Traffic Light: GREEN (GO!)
🚗 Vehicle: Moving through the green light.
Do you want to change the light again? (y/n): y
```
