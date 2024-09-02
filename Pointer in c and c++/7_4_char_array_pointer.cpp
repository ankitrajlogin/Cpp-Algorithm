
#include <bits/stdc++.h>

using namespace std;

void print(char c[]){ // it is call by reference. a pointer is created in it. 
    cout << "Printing the value 1 : " ; 
    cout << c << endl; 
    c[0] = 'A' ;

    int i = 0 ; 

    cout << "Printing the value 2 : " ; 
    while(c[i] != '\0'){
        cout << c[i] ; 
        i++ ; 
    }
    cout << endl; 

     

    cout << "Printing the value 3 : " ; 

    i = 0 ;
    while(*(c+i) != '\0'){
        cout << *(c+i) ; 
        i++ ; 
    }
    cout << endl; 
   


    cout << "Printing the value 4 : " ; 

    while(*c != '\0'){
        cout << *c ;  
        c++ ;  // this can happen in function because it is pass by refernce that is pointer to an array ; 
    }
    cout << endl; 

    
}


int main(){

    char c[20] = "Hello" ; 

    

    print(c) ; 
    

return 0 ;
}