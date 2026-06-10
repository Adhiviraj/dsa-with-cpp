#include <iostream>
using namespace std;

// Function receives a pointer (address of an integer)
void printValue(int *p)
{
    // p contains an address
    cout << "Address stored in p: " << p << endl;

    // *p means:
    // Go to the address stored in p
    // and read the value present there
    cout << "Value at that address: " << *p << endl;
}

// Function modifies the ORIGINAL variable
void incrementValue(int *p)
{
    cout << "\nInside incrementValue()" << endl;

    // Before increment
    cout << "Current value: " << *p << endl;

    // (*p) means value at the address
    // ++ increases that value
    (*p)++;

    cout << "Value after increment: " << *p << endl;
}

// Function changes only its local copy of the pointer
void incrementPointer(int *p)
{
    cout << "\nInside incrementPointer()" << endl;

    cout << "Pointer before increment: " << p << endl;

    // Move pointer to next integer location
    p = p + 1;

    cout << "Pointer after increment: " << p << endl;

    // NOTE:
    // Only local copy of p changes.
    // Original pointer in main() remains unchanged.
}

int main()
{
    // Normal integer variable
    int value = 5;

    // &value means address of value
    cout << "Value: " << value << endl;
    cout << "Address of value: " << &value << endl;

    cout << "\n--------------------\n";

    // Pointer declaration
    // p can store address of an integer
    int *p = &value;

    // p stores address
    cout << "p stores address: " << p << endl;

    // *p gives value at that address
    cout << "*p gives value: " << *p << endl;

    cout << "\n--------------------\n";

    // Passing address to function
    printValue(p);

    cout << "\n--------------------\n";

    // Modify original value using pointer
    incrementValue(p);

    cout << "\nBack in main()" << endl;
    cout << "Value after function call: " << value << endl;

    cout << "\n--------------------\n";

    cout << "Pointer in main before function: " << p << endl;

    // Changes only local copy of pointer
    incrementPointer(p);

    cout << "Pointer in main after function: " << p << endl;

    cout << "\n--------------------\n";

    // Changing value using pointer directly
    *p = 20;

    cout << "New value: " << value << endl;
    cout << "Value through pointer: " << *p << endl;

    return 0;
}