
#include<bits/stdc++.h>

using namespace std ; 

int compare(int a , int b){
    if(a>b) return -1 ; 
    return 1 ; 
}

int absolute_compare(int a , int b){
    if(abs(a) > abs(b)) return -1 ; 
    return 1 ; 
}

void BubbleSort(int *A , int n , int (*compare)(int , int)){
    int i , j , temp ; 

    for(i = 0 ; i< n ; i++){
        for(j = 0 ; j < n-1 ; j++){
            if(compare(A[j] , A[j+1]) > 0){
                temp = A[j] ; 
                A[j] = A[j+1] ; 
                A[j+1] = temp ; 
             }
        }
    }
}


int main(){

    int A[] = {-31 , 22 , -1 , 50 , -6 , 4} ; 

    BubbleSort(A , 6 , compare) ; 

    for(int i = 0 ; i<6 ; i++){
        cout << A[i] << " " ; 
    }
    cout << endl ; 

    BubbleSort(A , 6 , absolute_compare) ; 

    for(int i = 0 ; i<6 ; i++){
        cout << A[i] << " " ; 
    }



    
}