
#include <bits/stdc++.h>
using namespace std;

int main(){
    int c[3][2][2] ; 

    int (*p)[2][2] = c ;   // p is 2d pointer of [2][2] 2d array , hence p+1 --> next 2*2 step ; 

    cout << c << endl; 
    cout << p << endl;  
    
    // both gave same result as c and p behave as same ; 
    cout <<endl <<  "c+1 output"<< endl; 
    cout << c+1 << endl; 
    cout << p+1 << endl ; 
    cout << &c[1][0][0] << endl; 


    // c[i][k][k] = *(c[i][j]+k) = *(*(c[i]+j)+k) = *(*(*(c+i)+k))  ; 

    int i = 0 ; 
    int j = 0 ; 
    int k = 0 ; 
    cout << endl; 
    cout << c[i][j][k] << endl; 
    cout << *(c[i][j]+k) << endl; 
    cout << *(*(c[i]+j)+k) << endl; 
    cout << *(*(*(c+i)+k))  << endl; 
    
    

    return 0 ;
}