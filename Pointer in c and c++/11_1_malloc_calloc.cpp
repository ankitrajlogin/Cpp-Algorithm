
/*


1. malloc (Memory Allocation):
The malloc function in C/C++ allocates a specified number of bytes in memory and returns a pointer to the first byte of the allocated space. However, it does not initialize the allocated memory, so it contains garbage values.

2. calloc (Contiguous Allocation):
The calloc function is similar to malloc, but it allocates memory for an array of elements and initializes all bytes to zero.

3. Realloc (re allocation)
The realloc function is used to resize a previously allocated memory block. It is useful when you need to expand or shrink dynamically allocated memory without losing the existing data. The realloc function can move the memory block to a new location if necessary, but it ensures that the data from the original memory block is preserved.

4. free (Deallocation):
The free function is used to deallocate memory that was previously allocated by malloc, calloc, or realloc. Failing to free dynamically allocated memory leads to memory leaks.

*/

#include<bits/stdc++.h>
using namespace std ; 

int main(){
    // malloc 

    void* p = malloc(3*sizeof(int)) ; 
    int*val = (int*)p ;   // typecasting ; 

    int* ptr = (int*)malloc(5 * sizeof(int));  // Allocates memory for an array of 5 integers
    if (ptr == NULL) {
        // Handle allocation failure
    }

    int* ptr2 = (int*)calloc(5, 5*sizeof(int));  // Allocates and initializes memory for an array of 5 integers
    // it initialize with value 0 only. 
    if (ptr2 == NULL) {
        // Handle allocation failure
    }

    for(int i= 0; i< 5 ; i++){
        cout << *(ptr+i) << " "; 
    }
    cout << endl; 

    for(int i= 0; i< 5 ; i++){
        cout << *(ptr2+i) << " "; 
    }


    free(ptr) ; 
    free(ptr2) ; 



    






}

