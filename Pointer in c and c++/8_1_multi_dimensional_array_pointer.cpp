
/*
Multidimensional arrays in C++ are arrays of arrays, meaning they contain elements that are themselves arrays. You can also use pointers to work with these arrays, and understanding how pointers relate to multidimensional arrays is essential for more complex data manipulations.

Multidimensional Arrays
A multidimensional array is essentially an array of arrays. The most common type is a 2D array (matrix), but you can have arrays with more dimensions (e.g., 3D, 4D, etc.).
*/

#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int matrix[3][3] = {
    {1, 10, 3},
    {4, 5, 6},
    {7, 8, 9}};

    // matrix[0]  --> 1D arrays of 3 integers ; 
    // matrix --> pointer to an array of 3 integer ; 
    
    // int* p = B --> it will give compiler time error ; 

    // 1. Pointer to an Array of Integers (Row Pointer): This pointer can point to an entire row of the array.

    int (*ptr)[3] ; // pointer to an array of 3 integer ; 
    ptr = matrix ; 

    // lets check what are the different value we get ; 
    cout << matrix << endl;  // address of matrix[0][0] ; 
    cout << ptr << endl;   // it also gives address of matrix[0][0] ;
    cout << &matrix[0][0] << endl; 

    // what is +1 value ?? ; 
    cout << "what is the value of ptr+1" << endl ; 

    cout << matrix+1 << endl; // it point to the next array of matrix that is matrix[1][0] ; 
    cout << ptr+1 << endl;    // as it store pointer to an array of 3 integer , so printing address of 4th element that is matrix[1][0]
    cout << &matrix[1][0] << endl; 

    cout << &matrix[0][1] << endl; 

    // important -> *(B+1) or B[1]  or &B[1][0] ; 


    cout << *(*matrix+1) << endl;  // matrix returning the pointer to integer array of 3 , --> *matrix --> first address --> +1 --> second address --> * ---> derefreence to 2nd address of 1 array ; 
}