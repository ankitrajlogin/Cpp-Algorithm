
#include <bits/stdc++.h>


using namespace std;


void func1(int A[]){ // as we know this is synthetic sugar act as int *A --> pointer to the first value of the array ;
}

void func2(int B[][3]){ // it is considered as pointer of 1st 1d array of size 3 ; 
}

void func3(int C[][2][2]){ // it is considered as pointer of 1st 2d array of size 2*3; 
}

void func4(int *A){}  // element pointer

void func5(int (*B)[3]){}  // 1d array pointer 

void func6(int (*C)[2][2]){}   // 2d array pointer 
 
int main(){
    int C[3][2][2]={{{2,5}, {7,9}},
                    {{3,4}, {6,1}},
                    {{0,8},{11,13}}};

    
    int B[2][3] = {{2,4,6} , {5,7,8}} ; 

    int A[3] = {1,2,3} ;

    func1(A) ; 
    func2(B) ; 
    func3(C) ; 

    func4(A) ; 
    func5(B) ; 
    func6(C) ; 
    

return 0 ;
}
