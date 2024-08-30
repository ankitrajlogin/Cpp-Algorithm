/*
1. & Operator (Address-of Operator):
The & operator is used to get the address of a variable. It returns the memory address where the variable is stored.
It is commonly used to initialize pointers by assigning them the address of a variable.


2. * Operator (Dereference Operator):
The * operator is used to dereference a pointer, meaning it accesses the value stored at the memory address held by the pointer.
When you have a pointer pointing to an address, * allows you to retrieve or modify the value at that address.


*/

#include <iostream>
using namespace std;

int main() {
    int var = 42;
    int* ptr = &var;  // `&` gives the address of `var`

    cout << "Address of var: " << ptr << endl;  // Address of var
    cout << "Value of var using pointer: " << *ptr << endl;  // Dereference to get value of var

    *ptr = 100;  // Modify value using pointer
    cout << "New value of var: " << var << endl;

    return 0;
}
