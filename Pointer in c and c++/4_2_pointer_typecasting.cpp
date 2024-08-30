/*
Typecasting in C++ (and other programming languages) is the process of converting a variable from one data type to another. This can involve converting between primitive types (like int to float) or converting between pointers (like converting void* to int*). There are different types of typecasting, and each serves different purposes and has different implications.
*/

#include<iostream>


using namespace std ; 

int main(){
    int a = 1025;
    int *p;
    p = &a;

    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n",p,*p);
    printf("Address = %d, value =%d\n",p+1,*(p+1));

    char *p0;
    p0 = (char*)p; // typecasting

    printf("size of char is %d bytes\n", sizeof(char));
    printf("Address =%d, value =%d\n",p0,*p0);
    cout << "value is in c++ : " <<  (int)(*p0) << endl; 

    // 1025 = 00000000 00000000 00000100 00000001  --> 1025 in hexadecimal . 

    // during printing it is character pointer , so it taking just 1 bytes so it taking just first block of the integer, hence , it printing just 1. 

    printf("Address =%d, value =%d\n",p0+1,*(p0+1));
    
     


    

}