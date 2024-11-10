
/*
why not have a general pointer that can store the address of any data type?

-->Computers access memory in chunks (e.g., 4 bytes for an int, 8 bytes for a double), and typed pointers ensure that the correct number of bytes is read or written when you dereference them. This ensures that the computer accesses memory efficiently and accurately.

--> Typed pointers help the compiler ensure that you are working with the correct type of data. For example, if you have an int*, the compiler expects you to use that pointer to access or modify an int value. This prevents errors like interpreting a double as an int.

--> Pointer arithmetic (e.g., incrementing a pointer) depends on the size of the data type. For example, incrementing an int* pointer will move the pointer by sizeof(int) bytes. The size of different data types varies (e.g., int might be 4 bytes, char is usually 1 byte). 

--> it is also used for dereference -> access/ modify value. 

--> it is also used for transversing , so that it is important to know exact size of it. 
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a = 1025 ; 

    int* p = &a ; 

    cout << *p << endl; // look at 4 bytes from starting address that it is storing. 

    return 0 ; 
}
