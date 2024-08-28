/*
Static Object Declaration
Static objects are allocated on the stack or data segment (for global and static objects) and their lifetime is managed by the scope in which they are declared.

Characteristics:
Stack Allocation: For local variables (non-static) or directly in the data segment for global/static variables.
Lifetime: Automatic for local variables (until the end of their scope) or until the end of the program for global/static variables.
Scope: Limited to the block or file in which they are declared.

Dynamic Object Declaration
Dynamic objects are allocated on the heap using memory management operations like new (or malloc in C), and their lifetime is managed explicitly by the programmer.

Characteristics:
Heap Allocation: Memory is allocated on the heap.
Lifetime: Managed manually by the programmer. The object persists until explicitly deallocated.
Scope: Can be accessed from anywhere if you have a pointer or reference to it.

*/

#include <iostream>
using namespace std ;

class MyClass {
    public:
        MyClass(){
            cout << "Constructor called !" << endl; 
        }
        ~MyClass(){
            cout << "Destructor called !" << endl; 
        }
};

int main() {

    MyClass obj2 ; 

    // obj is a static local object. It’s constructed once and retains its state between function calls. The destructor is called when the program ends.

    

    MyClass* obj = new MyClass(); // Dynamically allocated object
    delete obj; // Manually deallocate memory

    // obj is a pointer to a dynamically allocated MyClass object. The object is created with new and must be deallocated with delete to avoid memory leaks.


    return 0;
}




