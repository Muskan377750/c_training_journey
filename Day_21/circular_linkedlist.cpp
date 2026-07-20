#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularSLL {
    Node *head;

public:
    CircularSLL() {
        head = NULL;
    }

    // Insert at Beginning
    void insertBeg(int val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            head->next = head;
            return;
        }

        Node *temp = head;

        while (temp->next != head)
            temp = temp->next;

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    // Insert at End
    void insertEnd(int val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            head->next = head;
            return;
        }

        Node *temp = head;

        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
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

        Node *temp = head;

        while (temp->next != head)
            temp = temp->next;

        Node *del = head;
        head = head->next;
        temp->next = head;

        delete del;
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

        Node *temp = head;

        while (temp->next->next != head)
            temp = temp->next;

        Node *del = temp->next;
        temp->next = head;

        delete del;
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

    // Display
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
};

int main() {

    CircularSLL l;

    l.insertBeg(20);
    l.insertBeg(10);

    l.insertEnd(30);
    l.insertEnd(40);

    cout << "List: ";
    l.display();

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