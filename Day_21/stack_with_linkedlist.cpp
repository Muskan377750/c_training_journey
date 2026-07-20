#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Push Operation
    void push(int val) {
        Node* newNode = new Node(val);

        newNode->next = top;
        top = newNode;

        cout << val << " pushed into stack.\n";
    }

    // Pop Operation
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;
        cout << "Deleted element: " << top->data << endl;

        top = top->next;
        delete temp;
    }

    // Peek Operation
    void peek() {
        if (top == NULL) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Top element: " << top->data << endl;
    }

    // Display Operation
    void display() {
        if (top == NULL) {
            cout << "Stack is Empty\n";
            return;
        }

        Node* temp = top;

        cout << "Stack elements:\n";

        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n----- STACK MENU -----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while (choice != 5);

    return 0;
}