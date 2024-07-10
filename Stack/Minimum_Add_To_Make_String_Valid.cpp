#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int minAddToMakeValid(string s) {

        int open = 0;
        int close = 0;
        stack<char> st;

        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == '(' ){
                st.push(s[i]);
            }

            else{
                if( !st.empty() && st.top() == '(' ){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }

        }

        while( !st.empty() ){

            if( st.top() == '(' ){
                open++;
            }
            else{
                close++;
            }
            st.pop();

        }
        return (open+close);
    }
};

*/