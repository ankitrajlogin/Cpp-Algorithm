#include <stdio.h>
#include<bits/stdc++.h>

using namespace std ; 

int main() {
    int num = 98;
    void *ptr = &num;

    // Cast the void pointer to a char pointer
    char *charPtr = (char *)ptr;
    
    
    cout << *charPtr<< endl; 
    //The program initializes num to 98 (ASCII value of 'b'), and uses a void* pointer to point to num. The pointer is cast to char*, and dereferencing it prints the first byte of num, which is 'b'

    // Access the data as characters
    printf("First byte: %c\n", *charPtr);

    return 0;
}
