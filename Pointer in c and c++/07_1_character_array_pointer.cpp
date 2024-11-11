
/*
Character Arrays:
A character array is a sequence of characters stored in contiguous memory locations. In C and C++, character arrays are often used to store strings, which are sequences of characters terminated by a null character ('\0').
*/

#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std ; 

int main(){
    char c[4] ; 

    c[0] = 'J' ;
    c[1] = 'C' ;
    c[2] = 'T' ;
    c[3] = 'F' ;

    cout << strlen(c) << endl;  // it is giving 7 because we have not added last null value in it. so it is going as they can. 

    cout << c << endl;  // it is giving original value with garbage value. 
    // this is because last character set for null character ; 

    char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // String "Hello"

    cout << strlen(str) << endl; 
    cout << str << endl;  
}
