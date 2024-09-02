

// pointer --> can point to function and point to data ; 

// process : source code --> compiler ---> machine code ; 

#include<bits/stdc++.h>

using namespace std ; 


int Add(int a , int b){
    return a+b ;
}

int *func(int a , int b){
    int* result = new int(a + b);  // Dynamically allocate memory for the result
    return result; 
}

int main(){

    int c ; 
    int (*p)(int , int) ;  // Declare a function pointer that takes two int parameters and returns an int

    p = &Add ; // Assign the address of the Add function to the function pointer  // p = Add ; 

    c = (*p)(2,3) ;  // de-referencing and executing the function ;   // c  = p(2,3) ; 

    cout << c << endl; 

    
    int *(*p2)(int , int) ; //  declares a function named p2that takes two parameters of type int and returns a pointer to an int.

    p2 = func ;  // p2 = &func ; 

    int* res = (*p2)(2,3) ; //alls the function func through the function pointer p2 with arguments 2 and 3. This returns a pointer to the result, which is then stored in res.

    cout << *res << endl ; 



















}