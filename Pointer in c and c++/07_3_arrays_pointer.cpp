
#include <bits/stdc++.h>

using namespace std;



// arrays and pointer are different types that aare used in similar manner  ; 

int main(){
    char c1[6] = "Hello" ; 

    char* c2 ;  
    c2 = c1 ;  // c2 is a pointer to a char. c2 = c1 assigns the address of the first element of the array c1 (i.e., the address of 'H') to c2.
    
    cout << c2[1] << endl;  
    /*
    note : -> c1 is array but c2 is a pointer . 
    so c1++ can't happen ; 
    but c2++ can happen ; 
    
    */


    c2[0] = 'A' ;  // "Aello" ; 

    cout << c2 << endl; 
    cout << c1 << endl; 

    cout << *c2 << endl;  // *c2 dereferences the pointer c2, accessing the character it points to.
    cout << *(c1+1) << endl;  // *(c1 + 1) accesses the second character in the c1 array.

    // c1++ ;  //Constant value or expression: You are trying to increment a constant or an expression that cannot be modified
    cout << c1 << endl; 

    // but ; 
    // pointer that is pointing to this array can move 
    c2++ ; 
    cout << c2 << endl;
    cout << *(c2) << endl;  
    

return 0 ;
}
