/*
A void pointer is a special type of pointer in C and C++ that can point to any data type. The void pointer is a raw pointer that lacks a type, which means it doesn't know what type of object it is pointing to. This feature makes it versatile, as it can hold the address of any data type, but it also requires careful handling when dereferencing.

Declaration of Void Pointer:
A void pointer is declared like any other pointer, but instead of a specific type (e.g., int, float), it is declared as void*.

Key Characteristics of Void Pointers:
1. Generic Pointer: It can store the address of any type of data, making it useful in scenarios where the type of data is not known until runtime.

2. No Dereferencing Without Casting: Since a void pointer does not have a type, you cannot directly dereference it. You must first cast it to a specific type before dereferencing.


Use Cases for Void Pointers:
1. Generic Functions: Void pointers are commonly used in generic functions where the data type isn't known in advance. For example, in C, the malloc() function returns a void* because it doesn't know what type of data you will store in the allocated memory.

Example:

void* memory = malloc(10 * sizeof(int));  // Allocates memory for 10 integers
int* intMemory = (int*)memory;  // Cast the void pointer to int pointer


2. Generic Data Structures: Void pointers are useful in implementing generic data structures like linked lists, queues, and stacks, where the data type stored in the structure can vary.

Example:
cpp
Copy code
struct Node {
    void* data;
    Node* next;
};

3. Low-Level Programming: Void pointers are often used in low-level programming, such as in system calls and hardware-level operations, where the type of data is not known or needs to be abstracted.

*/

#include <iostream>
using namespace std;

void printValue(void* ptr, char type) {
    if (type == 'i') {
        cout << "Integer: " << *(int*)ptr << endl;
    } else if (type == 'f') {
        cout << "Float: " << *(float*)ptr << endl;
    } else if (type == 'c') {
        cout << "Character: " << *(char*)ptr << endl;
    }
}

int main() {
    int num = 42;
    float pi = 3.14;
    char ch = 'A';

    void* ptr;

    // Assigning different data types to void pointer
    ptr = &num;
    printValue(ptr, 'i');

    ptr = &pi;
    printValue(ptr, 'f');

    ptr = &ch;
    printValue(ptr, 'c');



    // void pointer typecasting. 
    int a = 1025 ; 

    void* p = &a ;

    char* p0 = (char*)p ; 

    cout << (int)(*p0) << endl; 

    return 0;
}
