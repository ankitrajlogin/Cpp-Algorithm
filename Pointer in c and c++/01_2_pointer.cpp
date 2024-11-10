
#include <bits/stdc++.h>
using namespace std;




int main(){

    int a = 10 ; 
    int *p ; 

    p = &a ; 

    cout << p << endl; 
    p++ ; // it point to next address. as it is integer , point to next 4 block ; 

    cout << p << endl; 

    cout << "size of int pointer p is : " << sizeof(p) << endl;    // output : 8

    // Pointer Size: A pointer holds the memory address of a variable, and on a 64-bit system, the system is designed to use 64-bit addresses. This means that a pointer needs to be able to hold a 64-bit address, which is equivalent to 8 bytes (since 1 byte = 8 bits).

    

return 0 ;
}
