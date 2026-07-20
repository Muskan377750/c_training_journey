#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next, *prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class CircularDLL {
    Node *head;

public:
    CircularDLL() {
        head = NULL;
    }

    // Insert at Beginning
    void insertBeg(int val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }

        Node *tail = head->prev;

        newNode->next = head;
        newNode->prev = tail;

        tail->next = newNode;
        head->prev = newNode;

        head = newNode;
    }

    // Insert at End
    void insertEnd(int val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }

        Node *tail = head->prev;

        tail->next = newNode;
        newNode->prev = tail;

        newNode->next = head;
        head->prev = newNode;
    }

    // Delete from Beginning
    void deleteBeg() {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node *tail = head->prev;
        Node *temp = head;

        head = head->next;

        head->prev = tail;
        tail->next = head;

        delete temp;
    }

    // Delete from End
    void deleteEnd() {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node *tail = head->prev;
        Node *newTail = tail->prev;

        newTail->next = head;
        head->prev = newTail;

        delete tail;
    }

    // Search
    void search(int key) {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        Node *temp = head;

        do {
            if (temp->data == key) {
                cout << key << " Found\n";
                return;
            }
            temp = temp->next;
        } while (temp != head);

        cout << key << " Not Found\n";
    }

    // Display Forward
    void display() {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        Node *temp = head;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }

    // Display Reverse
    void reverseDisplay() {
        if (head == NULL) {
            cout << "List Empty\n";
            return;
        }

        Node *tail = head->prev;
        Node *temp = tail;

        do {
            cout << temp->data << " ";
            temp = temp->prev;
        } while (temp != tail);

        cout << endl;
    }
};

int main() {

    CircularDLL l;

    l.insertBeg(20);
    l.insertBeg(10);

    l.insertEnd(30);
    l.insertEnd(40);

    cout << "Forward: ";
    l.display();

    cout << "Reverse: ";
    l.reverseDisplay();

    l.deleteBeg();
    cout << "After Delete Beginning: ";
    l.display();

    l.deleteEnd();
    cout << "After Delete End: ";
    l.display();

    l.search(20);
    l.search(100);

    return 0;
}