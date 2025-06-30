# 🏥 Hospital Management System (C++, OOP, DSA)

This project is a comprehensive **Hospital Management System** built using **C++**, applying core **Object-Oriented Programming (OOP)** and **Data Structures & Algorithms (DSA)** concepts. It simulates a multi-functional hospital environment with features for patient management, staff and doctors, real-time alerting, inventory, appointments, billing, and disease detection.

---

## 🚀 Features

### 👨‍⚕️ Patient Management
- Add, delete, update patient records
- Room allocation and availability checking
- Search patients by ID or CNIC
- View patient billing details

### 📅 Appointment System (Queues)
- Regular and emergency appointments
- Priority handling for emergency cases
- Queue management using linked lists

### 🧑‍🔬 Doctor & Staff Management
- Add/update doctor profiles
- Manage staff using circular linked list
- File I/O for persistent data storage

### 💊 Inventory Management (AVL Tree)
- Add, update, delete inventory items
- Search and display inventory
- Track low-stock items and generate expiry reports
- AVL Tree for self-balanced efficient lookups

### 📊 Financial Analysis (BST)
- Add/view patient financial records
- Uses Binary Search Tree for fast patient search
- Categories: Room, Medication, Surgery, Doctor, Lab

### 🚨 Real-Time Alert System (Stack)
- Add, pop, and view latest alerts
- Stack ensures LIFO behavior

### 🦠 Disease Detector (Hash Map)
- Enter symptoms to detect possible diseases
- Uses a hash map to match symptoms to conditions

### 🔐 User Login System
- High-level and local users
- ID creation, password masking, and reset
- Role-based feature access

---

## 🛠 Technologies Used

- **Language**: C++
- **Paradigm**: Object-Oriented Programming (OOP)
- **DSA**: Linked List, Stack, Queue, Hash Map, BST, AVL Tree
- **File Handling**: Patient, staff, inventory, alerts data
- **Platform**: Console (Windows OS)

---

## 📂 Project Structure

| File/Folder         | Description                          |
|---------------------|--------------------------------------|
| `main.cpp`          | Core logic and main application flow |
| `header.h`         | Disease detection module             |
| `*.txt`             | File I/O data (patients, staff, etc.)|

---


## 📂 Screenshots

Take a look at the visuals of the Hospital Management System in action. Each screen represents a key feature of the system.

---

### 🖥️ Loading Screen
![Loading Screen](https://github.com/user-attachments/assets/635cc3a2-ea0c-422f-a5a3-19efb4b5f87a)
The system greets users with a clean and animated **loading screen** to enhance the user experience before login.

---

### 🔐 Main Menu (Login Roles)
![Main Menu](https://github.com/user-attachments/assets/218ad78d-7c74-4d8b-b62c-ac0e99e74c16)
Users can choose between **High-Level** (admin) and **Local-Level** (staff) roles using an intuitive arrow-key menu system.

---

### 👤 Local User Login Interface
![Login_screen_for_local_user](https://github.com/user-attachments/assets/c408b2da-9101-4100-8480-a86fbdecce8d)
The **Local User** login screen features secure password input with character masking and loading animation for authentication.

---

### 🏠 Local User Dashboard
![Local_user_main_menu](https://github.com/user-attachments/assets/f7ec43ab-2ef1-4a8f-8784-2a02aaf4691c)
This is the main menu for **Local Users** where they can manage patients, generate financial reports, use the disease detector, send alerts, and much more.

---

### 🦠 Disease Detector
![disease detector](https://github.com/user-attachments/assets/316eccd0-bd50-4424-a640-61432dfc3ed0)
Users can input symptoms, and the system intelligently suggests **potential diseases** using a **hash map**-based detection algorithm.

---

### 🏥 Hospital Management Panel
![managment](https://github.com/user-attachments/assets/ab841363-ae6a-49db-ac21-f55b1e72d643)
The management panel allows high-level users to access **doctor and staff profile management**, view bills, and manage inventory.

---

### 🔍 Inventory Item Search
![Iteam Searching](https://github.com/user-attachments/assets/2acbb204-7d3c-409d-b1fb-8b75d2fff9d8)
Quickly search for any medical item using its ID. Efficient **AVL Tree** structure ensures fast retrieval even in large inventories.

---

### 📦 Inventory Management Menu
![Inventory Managment](https://github.com/user-attachments/assets/592e20d8-75ad-48b1-adc2-21c7ed6afe52)
Add, update, delete, or analyze inventory. Track low-stock items, generate expiry reports, and find the most expensive item using AVL Trees.

---
