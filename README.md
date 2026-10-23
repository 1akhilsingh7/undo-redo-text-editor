# Undo and Redo Text Editor

A beginner-friendly, menu-driven console application written in C++ that demonstrates how **two stacks** can implement Undo and Redo functionality.

## Features

- Add text to the current text.
- Display the current text.
- Undo the most recent text change.
- Redo a change that was undone.
- Clear the current text.
- Handle non-numeric menu input and invalid menu choices.

## Concepts Demonstrated

- Stack data structure and **Last In, First Out (LIFO)** behaviour
- C++ Standard Template Library (`std::stack`)
- Strings and classes
- `switch` statements and `do-while` loops
- Basic console input validation

## Requirements

- A C++ compiler such as GCC (`g++`) or MinGW
- C++11 or later

No external libraries are required.

## Compile and Run

### Windows (MinGW / GCC)

Open a terminal in the repository folder and run:

```bash
g++ -std=c++11 undo_redo_editor.cpp -o undo_redo_editor.exe
.\undo_redo_editor.exe
```

### Linux / macOS

```bash
g++ -std=c++11 undo_redo_editor.cpp -o undo_redo_editor
./undo_redo_editor
```

## How It Works

The editor stores the current text in `currentText` and keeps two history stacks:

- `undoStack` stores earlier versions of the text before changes.
- `redoStack` stores versions that were undone and may be restored.

When text is added or cleared, the previous text is pushed onto `undoStack` and the redo history is cleared. Undo moves the current text to `redoStack` and restores the latest saved state from `undoStack`. Redo moves the current text to `undoStack` and restores the latest state from `redoStack`.

## Menu Options

1. Enter Text
2. Display Current Text
3. Undo
4. Redo
5. Clear Text
6. Exit

## Project Documents

Project report and presentation files are included in [`docs/`](docs/).

## Limitations

- Console interface only; no graphical user interface.
- Text is not saved to disk and is lost when the program exits.
- History stores complete text snapshots rather than individual editing operations.
- The history stacks have no explicit size limit.

## Possible Future Improvements

- Save and load text from a file.
- Add character-level editing and more granular undo/redo.
- Create a graphical user interface.
- Add automated tests.

## License

This project includes an MIT License. See [`LICENSE`](LICENSE).
