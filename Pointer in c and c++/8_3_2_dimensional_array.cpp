

#include <bits/stdc++.h>
using namespace std;

int main(){
    int B[3][3] = {
    {1, 10, 3},
    {4, 5, 6},
    {7, 8, 9}};

    cout << "value of B[i][j] is equal to  *(B[i]+j) "  << endl << endl; 

    
    cout << "Address of B[0][0] : " << B << endl; 
    cout << "Address of B[0][0] : " << &B << endl; 
    cout << "Address of B[0][0] : " << &B[0] << endl ; 
    cout << "Address of B[0][0] : " << B[0] << endl ; 
    cout << "Address of B[0][0] : " << &B[0][0] << endl << endl; 

    // what will be + 1 for all the case 
    cout << "B+1         will give the value of B[1][0] : "   << B+1 << endl; 
    cout << "*(B+1)      will give the value of B[1][0] : "   << *(B+1) << endl; 
    cout << "&B[1]       will give the value of B[1][0] : "   << &B[1] << endl; 
    cout << "&B[1][0]    will give the value of B[1][0] : "   << &B[1][0] << endl; 

    cout << endl; 
    // using pointer; 

    int (*ptr)[3] = B ; 

    cout << "value of ptr is first : " << ptr << endl;  
    cout << "value of ptr+1 will give +3 values as it is pointer array of 3 integer : " << ptr+1 << endl << endl; 

    int *p = *ptr ; 
    cout << "value of *ptr is address of first value of array of ptr : " << *ptr << endl << endl; 

    cout << "value of p is first : " << p << endl; 
    cout << "value of p+1 will give next value : " << p+1 << endl; 
    cout << "value of P+4 will give same as ptr+1 : " << p+3 << endl; 

    
    

    return 0 ;
}