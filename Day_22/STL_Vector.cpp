#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;

    // ==========================
    // INSERT OPERATIONS
    // ==========================

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "After push_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Insert at specific position
    v.insert(v.begin() + 2, 100);

    cout << "After insert: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // ==========================
    // DELETE OPERATIONS
    // ==========================

    // Delete last element
    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Erase one element
    v.erase(v.begin() + 1);

    cout << "After erase: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // ==========================
    // ACCESS ELEMENTS
    // ==========================

    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 2: " << v.at(2) << endl;

    // ==========================
    // SIZE & CAPACITY
    // ==========================

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // ==========================
    // SORT
    // ==========================

    v.push_back(5);
    v.push_back(50);

    sort(v.begin(), v.end());

    cout << "After sort: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // ==========================
    // REVERSE
    // ==========================

    reverse(v.begin(), v.end());

    cout << "After reverse: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // ==========================
    // FIND
    // ==========================

    auto it = find(v.begin(), v.end(), 20);

    if (it != v.end())
        cout << "20 Found\n";
    else
        cout << "20 Not Found\n";

    // ==========================
    // EMPTY
    // ==========================

    if (v.empty())
        cout << "Vector is Empty\n";
    else
        cout << "Vector is Not Empty\n";

    // ==========================
    // CLEAR
    // ==========================

    v.clear();

    cout << "After clear, Size = " << v.size() << endl;

    return 0;
}