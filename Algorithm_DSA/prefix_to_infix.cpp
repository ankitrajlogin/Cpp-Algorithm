#include<bits/stdc++.h>

using namespace std;


string prefix_to_infix(string s){
    reverse(s.begin() , s.end()) ;

    // cout << s << endl; 

	int n = s.length() ;

	stack<string>st ; 

	for(int i = 0 ; i< n ; i++){
		char c = s[i] ;
        // cout << c << endl; 

		if((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z') || (c >= '0' && c<= '9') ){
            string val = "" ;
            val+= c ;  
            // cout << val << endl; 
			st.push(val) ; 
		}
		else{
			string val1 = st.top() ; 
			st.pop() ; 

			string val2 = st.top() ; 
			st.pop() ; 

            // cout << val1 + c + val2 << endl; 


			st.push('(' + val1+c+val2 + ')') ; 
		}
	} 

	// cout << st.top() << endl; 
	return st.top() ;
}


int main() {
  string exp = "*-a/bc-/dkl";
  cout << "Prefix expression: " << exp << endl; 
  cout << "Infix expression: " << prefix_to_infix(exp) << endl;
  
  return 0;
}