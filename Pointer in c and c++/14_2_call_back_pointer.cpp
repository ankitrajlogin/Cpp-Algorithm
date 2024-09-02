
#include<bits/stdc++.h>
using namespace std ; 

void A(){
    printf("Hello") ; 
}


void B(void (*ptr)()){
    ptr() ; 
}

int main(){
    void (*p)() = A ; 
    B(p) ; 
}