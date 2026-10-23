

#include <iostream>
#include <stack>
#include <string>
#include <limits>

using namespace std;

class TextEditor
{
private:
    string currentText;        
    stack<string> undoStack;   
    stack<string> redoStack;   

public:
    
    TextEditor()
    {
        currentText = "";
    }

  
    void addText(const string &newPart)
    {
        undoStack.push(currentText);   
        currentText += newPart;        

    
        while (!redoStack.empty())
            redoStack.pop();

        cout << "Text added successfully.\n";
    }


    void clearText()
    {
        undoStack.push(currentText);   
        currentText = "";               

        while (!redoStack.empty())
            redoStack.pop();

        cout << "Text cleared.\n";
    }

    
    void undo()
    {
        if (undoStack.empty())
        {
            cout << "Nothing to undo!\n";
            return;
        }

        redoStack.push(currentText);   
        currentText = undoStack.top(); 
        undoStack.pop();

        cout << "Undo successful.\n";
    }

    
    void redo()
    {
        if (redoStack.empty())
        {
            cout << "Nothing to redo!\n";
            return;
        }

        undoStack.push(currentText);   
        currentText = redoStack.top(); 
        redoStack.pop();

        cout << "Redo successful.\n";
    }
    void display() const
    {
        
        if (currentText.empty())
            cout << "[Text box is empty]\n";
        else
            cout << "Current Text: " << currentText << "\n";
        
    }
};

void showMenu()
{
    cout << "\n TEXT EDITOR MENU \n";
    cout << "1. Enter Text\n";
    cout << "2. Display Current Text\n";
    cout << "3. Undo\n";
    cout << "4. Redo\n";
    cout << "5. Clear Text\n";
    cout << "6. Exit\n";
    cout << "Enter your choice (1-6): ";
}


int main()
{
    TextEditor editor;   
    int choice;

    cout << "***** WELCOME TO UNDO/REDO TEXT EDITOR *****\n";

    do
    {
        showMenu();
        cin >> choice;

        
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number between 1 and 6.\n";
            continue;
        }

        switch (choice)
        {
            case 1:
            {
                cin.ignore(); 
                string text;
                cout << "Enter text to add: ";
                getline(cin, text);
                editor.addText(text);
                break;
            }
            case 2:
                editor.display();
                break;

            case 3:
                editor.undo();
                break;

            case 4:
                editor.redo();
                break;

            case 5:
                editor.clearText();
                break;

            case 6:
                cout << "Exiting program. Thank you!\n";
                break;

            default:
                cout << "Invalid choice! Please select between 1 and 6.\n";
        }

    } while (choice != 6);

    return 0;
}
