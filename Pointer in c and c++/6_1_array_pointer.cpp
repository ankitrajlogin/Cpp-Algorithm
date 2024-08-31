
/*
Array pointers in C++ refer to pointers that point to an array or the first element of an array. In C++, arrays and pointers are closely related, and understanding their relationship is important for working with arrays efficiently.
*/


#include<iostream>
using namespace std ; 

int main(){
    int arr[5] = {1 , 2 , 3, 4, 5} ;

    int* ptr = arr ; 

    cout << arr << endl ;  // address of the first element of the array arr
    cout << ptr << endl ;  // address of the first element of the array arr
    cout << &arr[0] << endl; // address of the first element of the array arr

    cout << *arr << endl; // value of the first element of the array arr ; 
    cout << *ptr << endl; // value of the first element of the array arr ; 
    cout << arr[0] << endl; // value of the first element of the array arr ; 

    // address --> &A[i]  or  (A+i)  
    // value   -->  A[i]  or  *(A+i) ; 

    cout << "printing using for loop" << endl; 

    for(int i = 0 ; i< 5 ; i++){
        cout << "Address : "  << &arr[i] << " or " << ptr+i << " or " << arr+i << " ; Value : " << arr[i] << " or " << *(ptr+i) << " or " << *(arr+i) << endl; 
     }
 
} 
