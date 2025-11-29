# 🚗 **The Happy Car Drive**

A classic retro-style ASCII console car game built in C++ using simple logic, loops, and creativity.
Designed and coded by **Anas, Wali, Zeeshan, and Rauf**.

---

## 🎮 **Features**
* 🧩  **logic**  Used only **iostream** 
* 🚘 **Player car** with multi-row ASCII graphics
* 🚙 **Enemy car** with 3-row height
* 🛣️ **Three-lane road system** with centered borders
* 💥 **Accurate 3-row collision detection**
* 🧱 **Wall collision** (hit border = game over)
* 🎯 **Start menu + Play/Exit selection**
* ➕ **Score system**
* 🔁 **Automatic restart system**
* 🦘 **Jump ability (X key)**
* 💨 Smooth enemy movement
* 🕹 Controls: **W / A / S / D + X**

---

## 🕹 **Controls**

| Key   | Action                     |
| ----- | -------------------------- |
| **W** | Move Forward               |
| **S** | Move Backward (fast)       |
| **A** | Move to Left Lane          |
| **D** | Move to Right Lane         |
| **X** | JUMP (dodge enemy quickly) |
| **1** | Start Game                 |
| **2** | Exit                       |

---

## 📜 **Game Mechanics**

### ✔ Multi-Row Car System

Both player and enemy cars are **3 lines tall**, which gives them a realistic visual shape.

### ✔ Collision Logic

Game Over triggers when:

* Player lane equals enemy lane
* **AND** their row positions overlap within 3 rows
* Or player hits the wall border

### ✔ Enemy Behavior

* Enemy moves downward every turn
* When it reaches the end → score++
* Enemy lane shifts left and right using a pattern (no random)
* Enemy speed increases gradually depending on your settings

---

## 🏁 **Start Menu**

```
 ___________________________
|THE HAPPY CAR DRIVE        |
|BY ANAS,WALI,ZEESHAN & RAUF|
|1.Play                     |
|2.exit                     |
|___________________________|
```

---

## 🚧 **How to Run**

### **Windows**

Just compile using any C++ compiler:

```
g++ game.cpp -o game
./game
```

or using Visual Studio Code with MinGW.

### **Requirements**

* Windows OS
* Basic C++ compiler (MinGW, MSVC, etc.)
* Console window (cmd or terminal)

---

## 🧱 **Project Structure**

```
├── game.cpp
├── README.md
```

---

## 🧠 **What We Learned**

* Using ASCII art for animation
* Multi-row rendering
* Implementing game loops
* Collision detection
* Simple UI menu design
* Function separation (start, playgame)
* Using loops + conditions to build a fully working game

---

## 👥 **Contributors**

* **Anas** — Lead Programmer
* **Wali** — Logic & Testing
* **Zeeshan** — UI & Car Design
* **Rauf** — Gameplay & Ideas

---

## ⭐ **Future Improvements**

* Add sound effects (beep)
* Add multiple enemy cars
* Add power-ups
* Add day/night mode
* Add score saving (high score system)
* Add smoother lane animation
* Add random lane selection

---

## 📌 **License**

Open-source — free to edit and learn from.
