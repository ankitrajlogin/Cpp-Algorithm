/*

Pointers in C++

A pointer in C++ is a variable that stores the memory address of another variable. Instead of holding a value directly, it holds the address where the value is stored in memory. This allows for indirect access and manipulation of the value via the pointer.


Key Concepts:
1. Dereferencing: Accessing the value stored at the memory address.
2. Pointer arithmetic: Operations like incrementing or decrementing a pointer to traverse memory.

*/

#include<iostream>

using namespace std ;

int main(){
    int var = 10 ;  // normal variable ; 
    int* ptr = &var ; // pointer to var , storing its address 
    // &var --> address of variabler var ; 
    // int* ptr --> create a integer pointer that point to the any integer variable address ; 

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in ptr (address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;  // Dereferencing

    // modifying value using pointer 

    *ptr = 20 ; 

    cout << "New value of var: " << var << endl; 


    



     

}
