
#include<bits/stdc++.h>

using namespace std ; 

void PrintHelloWorld(){
    cout << "Hello world" << endl; 
}

int *Add(int* a , int* b){
    int c = (*a) + (*b) ; 

    return &c ;  // Returning the address of a local variable
}

int main(){
    int a = 3 , b = 4;  
    int* ptr = Add(&a , &b) ; 
    // When you return &c, you are returning a pointer to this local variable, which becomes invalid once the function finishes execution.

    cout << *ptr << endl; 
    // Dereferencing this pointer later (e.g., *ptr) results in undefined behavior because the memory location it points to might have been overwritten by other data.
    PrintHelloWorld() ;



}