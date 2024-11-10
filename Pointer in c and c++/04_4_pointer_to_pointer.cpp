#include <iostream>

using namespace std;

int main() {
    int num = 10;          // Declare an integer variable
    int *ptr = &num;       // Declare a pointer to an integer and point to 'num'
    int **ptr2 = &ptr;     // Declare a pointer to a pointer and point to 'ptr'

    // Accessing the value of 'num' through pointer to pointer
    cout << "Value of num: " << **ptr2 << endl;  // Dereferencing twice to access 'num'

    // Showing addresses
    cout << "Address of num: " << &num << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Address stored in ptr2: " << ptr2 << endl;

    return 0;
}
