
#include <bits/stdc++.h>

using namespace std;


void helper(int *arr){
    cout << arr+1 << endl; 
    cout << arr[1] << endl; 
}

// both giving same result ; 
// The function helper2 accepts an array, but in reality, when you pass an array to a function, it decays into a pointer to its first element. So, int arr[] is essentially the same as int *arr in this context.

void helper2(int arr[]){
    cout << arr+1 << endl; 
    cout << arr[1] << endl; 
}




int main(){

    int arr[] = {1 , 2, 3 ,4 , 5} ;

    helper(arr) ; 
    helper2(arr) ; 

    


    

return 0 ;
}