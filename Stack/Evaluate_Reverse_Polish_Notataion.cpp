#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int evl( string ch , int val1 , int val2 ){

        if ( ch == "+" ) return val1+val2;
        if ( ch == "-" ) return val1-val2;
        if ( ch == "*" ) return val1*val2;
        return val1/val2;

    }

    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for( int i = 0 ; i < tokens.size() ; i++ ){

            if( tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*" ){

                int val1 = st.top();
                st.pop();

                int val2 = st.top();
                st.pop();
                
                int ans = evl( tokens[i] , val2 , val1 );
                st.push(ans);
            
            }

            else{
                st.push(stoi(tokens[i]));
            }
            
        }

        return st.top();
        
    }
};

*/