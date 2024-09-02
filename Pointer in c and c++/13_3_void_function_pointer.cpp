

#include<bits/stdc++.h>
using namespace std ; 

void printHello(char* name){
    cout << name << endl ; 
}

int main(){
    void (*ptr)(char*) ; 

    ptr = printHello ; 
    ptr("Tom") ; 
}