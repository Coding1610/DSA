#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    string solve( string& s ){

        int n = s.size();
        stack<char> st;

        for( int i = 0 ; i < n ; i++ ){

            if( (s[i] == 'B' && !st.empty() && st.top() == 'A' ) || (s[i] == 'D' && !st.empty() && st.top() == 'C' ) ){
                st.pop();
                s.erase(i-1,2);
                i -= 2;
            }

            else{
                st.push(s[i]);
            }
            
        }

        return s;
    }

    int minLength(string s){

        string str = solve( s );
        return str.size();
        
    }
};

*/