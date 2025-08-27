#include <iostream>
using namespace std;
#define MAX 5

class stack {
private:
    int arr[MAX];
    int top;

public:
    stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack overflow, cannot push more elements." << endl;
            return;
        }
        top++;
        arr[top] = value;
        cout << value << " pushed to stack." << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements are:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    stack s;
    int choice, value;

    do {
        cout << "\n--- Stack menu ----" << endl;
        cout << "1. Push" << endl;
        cout << "2. Display stack" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.display();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 3);

    return 0;
}
