# 🏥 Hospital Management System (C++)

## 📌 Project Description

This project is a **console-based Hospital Management System** developed in C++. It allows users to manage doctor appointments, patient records, staff details, and password-protected access using file handling.

The system is designed using **Object-Oriented Programming (OOP)** concepts like inheritance, polymorphism, and abstraction.

---

## 🚀 Features

* 🔐 Password-protected login system
* 👨‍⚕️ Doctor appointment booking
* 📋 Patient record storage and retrieval
* 👩‍💼 Staff information management
* 📁 File handling using binary and text files
* 🧾 Separate records for each doctor

---

## 🏗️ Technologies Used

* C++ Programming Language
* File Handling (ifstream, ofstream)
* Object-Oriented Programming (OOP)
* Windows-specific functions (`windows.h`)

---

## 📂 Project Structure

* `main.cpp` → Main source code file
* `Dr_Surjeet_Singh.txt` → Patient records for Dr. Surjeet Singh
* `Dr_Akshit_Bansal.txt` → Patient records for Dr. Akshit Bansal
* `Dr_Nitin_Goyal.txt` → Patient records for Dr. Nitin Goyal
* `staff.txt` → Staff details
* `Password.txt` → Stores login password

---

## ⚙️ How to Run the Project

### Step 1: Compile the Code

Use any C++ compiler (like g++):

```bash
g++ Untitled1.cpp -o hospital
```

### Step 2: Run the Program

```bash
./hospital
```

*(On Windows, use `hospital.exe`)*

---

## 🔑 Default Behavior

* The program asks for a **password at startup**
* If `Password.txt` does not exist, you need to create it manually or modify the code
* You can change the password from the menu

---

## 📋 Menu Options

1. Doctor Appointment
2. Save Staff Information
3. Check Patient Appointments
4. Check Staff Information
5. Change Password
6. Logout

---

## 🧠 OOP Concepts Used

* **Abstraction** → Base class `one` with virtual functions
* **Inheritance** → Derived classes (`info`, `Singh`, `Bansal`, `Goyal`, `staff`)
* **Polymorphism** → Function overriding (`get()` and `show()`)

---

## ⚠️ Limitations

* Works only on **Windows OS** (due to `windows.h`)
* Basic file security (no encryption)

---

## 🔮 Future Improvements

* Add GUI (using Qt or similar frameworks)
* Improve data security with encryption
* Add database support (MySQL / SQLite)
* Search and delete records functionality

---

## 👨‍💻 Author

Developed by Devanshu Saini and Sania Chauhan (Chandigarh University)
