
/*
Explanation:
A double pointer (also called a pointer to a pointer) is a pointer that stores the address of another pointer. In simpler terms, it is a variable that holds the memory address of another pointer, which in turn holds the address of a variable.

This concept is useful in various scenarios, such as:

Dynamic memory allocation for multi-dimensional arrays.
Passing a pointer by reference to a function, so that the function can modify the pointer itself.

*/


#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var;      // Single pointer: points to the address of var
    int** doublePtr = &ptr;  // Double pointer: points to the address of ptr

    

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in ptr (address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;  // Dereferencing ptr

    cout << "Value stored in doublePtr (address of ptr): " << doublePtr << endl;
    cout << "Value pointed to by doublePtr (address of var): " << *doublePtr << endl;  // Dereferencing doublePtr
    cout << "Value pointed to by *doublePtr (value of var): " << **doublePtr << endl;  // Dereferencing twice


    int*** triplePtr = &doublePtr;
    cout << "Value using triple pointer: " << ***triplePtr << endl;

    return 0;
}
