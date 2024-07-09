#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    bool isValid(string s){

        if( s.size() == 1 ){
            return false;
        }

        stack<char> st;

        for( int i = 0 ; i < s.size() ; i++ ){

            char ch = s[i];

            if( ch == '(' || ch == '{' || ch == '[' ){
                st.push(ch);
            }

            else{
                if( !st.empty() ){
                    char tp = st.top();
                    if( ch == ')' && tp == '(' || ch == ']' && tp == '[' || ch == '}' && tp == '{' ){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            } 

        }

        if( st.empty() ){
            return true;
        }
        return false;
        
    }
};

*/