
/*
Solution : Use Dynamic Memory Allocation (Advanced):

If you need to return a pointer, allocate memory dynamically, so that the memory persists after the function returns. However, you'll also need to remember to free this memory to avoid memory leaks.
*/

#include<bits/stdc++.h>
using namespace std ; 

int* Add(int* a, int* b) {
    int* c = new int((*a) + (*b));  // Allocate memory on the heap
    return c;  // Return the pointer
}

int main() {
    int a = 3, b = 4;
    int* ptr = Add(&a, &b);
    cout << *ptr << std::endl;

    delete ptr;  // Free the allocated memory



    return 0;
}
