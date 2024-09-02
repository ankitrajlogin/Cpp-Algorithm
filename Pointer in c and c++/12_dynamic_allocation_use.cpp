
#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    // int A[n] ;  // VLAs are allowed in C99 but are not supported in standard C++.
    // Therefore, this will result in a compilation error in most C++ compilers that adhere strictly to the C++ standard.

    // In C++, the size of an array must be a constant expression, meaning the size must be known at compile time. However, in your code, n is determined at runtime (i.e., the value of n is input by the user), making A[n] a variable-length array (VLA).

    int *A = new int[n] ; 
    // or 

    int *B = (int*)malloc(n*sizeof(int)) ; 

    for(int i = 0 ; i< n ; i++){
        A[i] = i+1 ; 
    }

    int *C = (int*)realloc(A , n/2)  ;  

    for(int i = 0 ; i< n ; i++){
        cout << C[i] << " " ;
    }

    


}