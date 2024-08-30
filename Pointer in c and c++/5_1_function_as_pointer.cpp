
// pointer as function arguments --> call by reference ; 

#include<stdio.h>
#include<iostream>


void Increase(int a){  // call by value ; 
    a = a+1 ; 
    printf("Address of a in increase funciton : %d  \n" , &a) ; 
}


/* --------------------------------------------------------------------------
 application memory --> || Heap || stack || static/Global  ||  Code(text)   ||
-----------------------------------------------------------------------------
*/

void Increment(int *p){  // call by reference. 
    *p = (*p) + 1; 
    printf("Address of a in increment funciton : %d  \n" , &p) ; 
}



int main(){
    int a ; 
    a = 10 ; 

    Increase(a) ; 
    printf("Address of a in increase funciton : %d \n" , &a) ; 
    printf("a = %d \n" , a) ; 

    Increment(&a) ; 
    printf("a = %d \n" , a) ; 

    
    
}