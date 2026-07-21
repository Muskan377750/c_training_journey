#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // ==========================
    // INSERT OPERATIONS
    // ==========================

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    l.push_front(5);
    l.push_front(1);

    cout << "After push_front & push_back: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Insert at specific position
    auto it = l.begin();
    advance(it, 2);     // Move iterator to 3rd position
    l.insert(it, 100);

    cout << "After insert: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // ==========================
    // DELETE OPERATIONS
    // ==========================

    l.pop_front();
    l.pop_back();

    cout << "After pop_front & pop_back: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Erase specific element
    it = l.begin();
    advance(it, 2);
    l.erase(it);

    cout << "After erase: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Remove by value
    l.remove(20);

    cout << "After remove(20): ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // ==========================
    // FRONT & BACK
    // ==========================

    cout << "Front = " << l.front() << endl;
    cout << "Back = " << l.back() << endl;

    // ==========================
    // SIZE
    // ==========================

    cout << "Size = " << l.size() << endl;

    // ==========================
    // REVERSE
    // ==========================

    l.reverse();

    cout << "After reverse: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // ==========================
    // SORT
    // ==========================

    l.push_back(8);
    l.push_back(15);
    l.push_back(2);

    l.sort();

    cout << "After sort: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // ==========================
    // UNIQUE
    // ==========================

    l.push_back(15);
    l.push_back(15);
    l.sort();
    l.unique();

    cout << "After unique: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // ==========================
    // EMPTY
    // ==========================

    if (l.empty())
        cout << "List is Empty\n";
    else
        cout << "List is Not Empty\n";

    // ==========================
    // CLEAR
    // ==========================

    l.clear();

    cout << "After clear, Size = " << l.size() << endl;

    return 0;
}