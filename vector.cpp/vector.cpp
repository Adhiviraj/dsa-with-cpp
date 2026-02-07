// vector - A vector in C++ is a dynamic array that can
//          grow or shrink in size automatically

#include <iostream>
#include <vector>
#include <algorithm>   // for sort, reverse
using namespace std;

int main()
{
    // -------------------------------
    // 1️⃣ Vector initialization
    // -------------------------------

    vector<int> b(5, 1);   // vector of size 5, all elements = 1

    cout << "Vector b elements:" << endl;
    for (int i : b) {
        cout << i << " ";
    }
    cout << endl << endl;

    // Empty vector
    vector<int> a;

    // -------------------------------
    // 2️⃣ Capacity & Size
    // -------------------------------

    cout << "Initial capacity: " << a.capacity() << endl;
    cout << "Initial size: " << a.size() << endl << endl;

    // -------------------------------
    // 3️⃣ push_back() → insert at end
    // -------------------------------

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    cout << "After push_back operations:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size: " << a.size() << endl;
    cout << "Capacity: " << a.capacity() << endl << endl;

    // -------------------------------
    // 4️⃣ Accessing elements
    // -------------------------------

    cout << "Element at index 1 (using at): " << a.at(1) << endl;
    cout << "Element at index 2 (using []): " << a[2] << endl;

    // Front & Back
    cout << "Front element: " << a.front() << endl;
    cout << "Back element: " << a.back() << endl << endl;

    // -------------------------------
    // 5️⃣ pop_back() → remove last
    // -------------------------------

    a.pop_back();

    cout << "After pop_back:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl << endl;

    // -------------------------------
    // 6️⃣ insert() → insert at position
    // -------------------------------

    // Insert 99 at index 1
    a.insert(a.begin() + 1, 99);

    cout << "After insert at index 1:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl << endl;

    // -------------------------------
    // 7️⃣ push_front() (NOT DIRECTLY)
    // -------------------------------
    // vector has NO push_front()
    // But we can simulate it using insert()

    a.insert(a.begin(), 5);   // acts like push_front

    cout << "After push_front simulation:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl << endl;

    // -------------------------------
    // 8️⃣ erase() → remove elements
    // -------------------------------

    // Remove element at index 1
    a.erase(a.begin() + 1);

    cout << "After erase at index 1:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl << endl;

    // Erase range (index 1 to 2)
    if (a.size() >= 3)
        a.erase(a.begin() + 1, a.begin() + 3);

    cout << "After erase range:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl << endl;

    // -------------------------------
    // 9️⃣ clear() → removes all elements
    // -------------------------------
    // clear() removes elements but DOES NOT reduce capacity

    cout << "Before clear size: " << a.size() << endl;
    cout << "Before clear capacity: " << a.capacity() << endl;

    a.clear();

    cout << "After clear size: " << a.size() << endl;
    cout << "After clear capacity: " << a.capacity() << endl << endl;

    // -------------------------------
    // 🔟 resize()
    // -------------------------------

    a.resize(5, 7);   // size becomes 5, new elements = 7

    cout << "After resize:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl << endl;

    // -------------------------------
    // 1️⃣1️⃣ sort() & reverse()
    // -------------------------------

    sort(a.begin(), a.end());

    cout << "After sort:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;

    reverse(a.begin(), a.end());

    cout << "After reverse:" << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl << endl;  

    // -------------------------------
    // 1️⃣2️⃣ empty()
    // -------------------------------

    if (a.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is NOT empty" << endl;

    return 0;
}
