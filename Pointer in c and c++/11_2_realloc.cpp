
/*
The realloc function is used to resize a previously allocated memory block. It is useful when you need to expand or shrink dynamically allocated memory without losing the existing data. The realloc function can move the memory block to a new location if necessary, but it ensures that the data from the original memory block is preserved.

Keys Points. 

1. If ptr is NULL, realloc behaves like malloc and allocates a new block of memory.

2. If new_size is 0 and ptr is not NULL, realloc behaves like free and deallocates the memory block.

3. If the new size is larger, realloc copies the existing data to the new memory location, and additional memory remains uninitialized.

4. If the new size is smaller, the memory block is truncated.
*/

#include <iostream>
using namespace std ; 
#include <cstdlib>  // For malloc, realloc, and free

int main() {

    int* arr = (int*)malloc(5 * sizeof(int));

    // Initialize the array with values
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }


    // Reallocate memory to store 10 integers
    arr = (int*)realloc(arr, 10 * sizeof(int));
    // new larger size , so realloc copies the existing data to the new memory location and other value with garbage value ; 

    // Initialize the new elements
    for (int i = 5; i < 10; ++i) {
        arr[i] = i + 1;
    }

    // Print the array
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
