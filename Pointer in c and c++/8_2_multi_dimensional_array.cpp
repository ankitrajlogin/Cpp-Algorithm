

#include <bits/stdc++.h>
using namespace std;

int main(){
    int B[3][3] = {
    {1, 10, 3},
    {4, 5, 6},
    {7, 8, 9}};

    
    // B[i][j] or *(B[i] + j) or *(*(B+1) +j) ; 
    int i = 1 , j = 1 ; 
    cout << B[i][j] << " " << *(B[i] + j)  << " " << *(*(B+1)+j) << endl ; 

    

    
    

    return 0 ;
}