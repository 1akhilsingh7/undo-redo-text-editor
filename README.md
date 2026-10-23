# Undo and Redo Text Editor Using Stack in C++

## 📌 Project Overview

The **Undo and Redo Text Editor** is a menu-driven, console-based application developed in C++. It demonstrates how the **Stack data structure** can be used to implement undo and redo operations in a text editor.

The project uses two stacks to maintain previous and undone text states, allowing users to add text, clear the current text, undo recent changes, and redo previously undone operations.

## ✨ Features

- **Add Text:** Add new text to the editor.
- **Clear Text:** Clear the current text.
- **Undo Operation:** Restore the previous text state.
- **Redo Operation:** Restore a state that was undone.
- **Display Text:** View the current text.
- **Menu-Driven Interface:** Perform operations through a simple console menu.
- **Input Validation:** Handles invalid menu input.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Data Structure:** Stack
- **Standard Library:** `iostream`, `stack`, and `string`

## 🧠 Concepts Used

- Stack data structure
- LIFO (Last In, First Out) principle
- Functions and conditional statements
- String manipulation
- State management using two stacks

## ⚙️ How It Works

The application uses two stacks:

- **Undo Stack:** Stores previous text states so they can be restored.
- **Redo Stack:** Stores text states that were undone, allowing them to be restored.

When a user modifies the text, the application saves the necessary state to support undo operations. When an undo operation is performed, the current state can be moved to the redo stack. A redo operation restores the previously undone state.

## 🚀 Getting Started

### Prerequisites

Install a C++ compiler such as GCC or MinGW.

### 1. Clone the Repository

```bash
git clone https://github.com/YOUR-USERNAME/undo-redo-text-editor.git
```

Replace `YOUR-USERNAME` with your GitHub username.

### 2. Navigate to the Project Directory

```bash
cd undo-redo-text-editor
```

### 3. Compile the Program

Using GCC or MinGW:

```bash
g++ -std=c++11 undo_redo_editor.cpp -o undo_redo_editor
```

### 4. Run the Program

On Windows:

```bash
.\undo_redo_editor.exe
```

On Linux or macOS:

```bash
./undo_redo_editor
```

## 📂 Project Structure

```text
undo-redo-text-editor/
├── undo_redo_editor.cpp
├── README.md
├── LICENSE
└── docs/
    ├── README.md
    ├── project-report.pdf
    ├── project-report.docx
    ├── project-presentation.pptx
    └── project-presentation.pdf
```

## 🎯 Learning Outcomes

- Understanding how stacks work in practical applications.
- Applying the LIFO principle to text editing operations.
- Implementing undo and redo functionality using C++.
- Improving problem-solving and programming skills.
- Understanding basic text-state management.

## ⚠️ Limitations

- The application runs in the console rather than a graphical interface.
- Text is not saved permanently to a file.
- Undo and redo operations use stored text states.

## 🔮 Future Improvements

- Add a graphical user interface (GUI).
- Implement file saving and loading.
- Add keyboard shortcuts for undo and redo.
- Improve text editing functionality.
- Add more advanced editing features.

## 👨‍💻 Author

**Your Name**

GitHub: [YOUR-USERNAME](https://github.com/YOUR-USERNAME)

## 📄 License

This project is licensed under the MIT License. See the `LICENSE` file for details.
