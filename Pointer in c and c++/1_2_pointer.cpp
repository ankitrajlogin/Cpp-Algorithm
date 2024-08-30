
#include <bits/stdc++.h>
using namespace std;




int main(){

    int a = 10 ; 
    int *p ; 

    p = &a ; 

    cout << p << endl; 
    p++ ; // it point to next address. as it is integer , point to next 4 block ; 

    cout << p << endl; 

    cout << "size of int pointer p is : " << sizeof(p) << endl; 

    

return 0 ;
}