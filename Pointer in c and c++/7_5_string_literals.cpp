
/*
String literals are sequences of characters enclosed in double quotes (e.g., "Hello, World!") in C and C++. They represent constant strings, which are stored in a read-only section of memory. When you use a string literal in your code, the compiler treats it as a pointer to a null-terminated array of characters (a string), and it is typically stored in a memory area that is protected from modification.

Key Characteristics of String Literals:
1. Immutable: String literals are stored in read-only memory, which means you should not modify them. Attempting to change the contents of a string literal can lead to undefined behavior.

2. Null-Termination: String literals are automatically null-terminated. The compiler appends a \0 character at the end of the string to mark its termination. For example, the string literal "Hello" is stored as {'H', 'e', 'l', 'l', 'o', '\0'}.

3. Type: The type of a string literal in C and C++ is const char[]. This means it is an array of const char elements, and attempting to modify the contents is not allowed.
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 

int main(){

    // char c[20] = "Hello" ; // string gets stored in the space for array ; 

    char *c = "Hello" ; // strings get stored as compile time constant , so can't get modifiy. 
    /*
    The warning you're seeing is due to the fact that you're trying to assign a string literal to a char* variable. In C++, string literals have a type of const char[], and modifying them is undefined behavior. This is why the compiler is warning you: ISO C++ forbids converting a string constant to 'char*'.
    */

   const char* str = "Hello";

   cout << c << endl; 
   cout << str << endl; 

//    c[0] = 'A' ;  //  this is not allowed , error occure as crash ; 

   cout << c << endl; 
  
         
}