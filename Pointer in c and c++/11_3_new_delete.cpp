/*

4. new Operator:
In C++, the new operator is used to allocate memory dynamically. Unlike malloc, new not only allocates memory but also calls the constructor to initialize the object. It also returns a pointer of the appropriate type, so there is no need for typecasting.

5. delete Operator:
In C++, the delete operator is used to deallocate memory that was allocated using new. When delete is called, it not only deallocates the memory but also calls the destructor to clean up the object. There is also a delete[] operator to deallocate memory allocated for arrays.

*/

#include<bits/stdc++.h>
using namespace std ; 

class MyClass {
public:
    MyClass() {
        cout << "Constructor called!" << endl;
    }
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }
};

int main(){
    int* ptr = new int;           // Allocates memory for a single integer

    int *arr = new int(10); // This allocates memory for a single integer and initializes it with the value 10.


    int* arr = new int[10] ;        // Allocates memory for an array of 5 integers


    delete ptr ; 
    delete arr ; 

    // Allocate memory for a single object using new
    MyClass* obj = new MyClass();

    // Allocate memory for an array of objects using new
    MyClass* arr2 = new MyClass[3];

    // Deallocate memory for the single object
    delete obj;

    // Deallocate memory for the array of objects
    delete[] arr2;



}

// Always check if realloc returns NULL to handle allocation failures properly.


// new int(10) allocates and initializes a single integer.
// new int[10] allocates an array of 10 integers but does not initialize them. 
// Proper memory deallocation requires using delete for a single integer and delete[] for arrays.