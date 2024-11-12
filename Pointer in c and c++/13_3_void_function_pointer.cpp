

#include<bits/stdc++.h>
using namespace std ;

void printHello(char* name) {
	cout << name << endl ;
}

// The syntax void (*ptr)(char*) is used to declare a function pointer. Here:
// 1. void is the return type.
// 2. (*ptr) declares ptr as a pointer to a function.
// 3. (char*) specifies that the function pointed to by ptr takes a char* as its parameter.

int main() {
	// This line declares a pointer ptr that can point to a function taking a char* as an argument and returning void.
	void (*ptr)(char*) ;
    
    // This line calls the function printHello through the pointer ptr, passing "Tom" as the argument.
	ptr = printHello ;
	ptr("Tom") ;
}
