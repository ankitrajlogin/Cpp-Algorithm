#include<iostream>

using namespace std ; 

/*
In array , there is no any call by value, there is only call by reference

-->When dealing with arrays in C++, call by value doesn't work as it does with regular variables. Arrays in C++ are always passed by reference, not by value. This is because passing the entire array by value would be inefficient due to the array's potentially large size. Instead, when you pass an array to a function, only the pointer to the first element of the array is passed (essentially passing by reference).

--> Call by value behavior with arrays isn't possible directly because arrays are passed by reference in C++.
*/

int double_element(int A[] , int size){ // it is call by reference. Interpreter just convert int A[] to int* A --> so it is call by reference. 
    int i = 0; 

    int sum = 0 ; 
    
    cout << A << endl ; // address of first element of Array A ; 
    cout << A+1 << endl;  // address of second element of Array A ; 
    cout << *(A+1) << endl; // value of second element of array A ; 

    for(int i = 0; i< size ; i++){
        sum += A[i] ; 
        A[i]*= 2 ; 
    }

    return sum ; 
}

int main(){
    int A[] = {2 , 3, 4, 5, 6 , 7} ; 
    int size = sizeof(A)/sizeof(A[0]) ; 

    cout << size << endl; 

    // there is no any ways to know array size in function , so we can to pass size also ; 
    cout << double_element(A , size) << endl;   // A can be used for &A[0] ;

    for(int i = 0 ; i< 5 ; i++){
        cout << A[i] << " " ; 
    }
}
