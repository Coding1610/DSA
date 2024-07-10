#include<bits/stdc++.h>
using namespace std;

/*

bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for( int i = 0 ; i < s.size() ; i++ ){

        if( s[i] != ')' ){
            st.push(s[i]);
        }

        else if( s[i] == ')' ){

            if( st.empty() || st.top() == '(' ){
                return true;
            }

            else {

                int operatorC = 0;
                while( st.top() != '(' ){

                    if( st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/' ){
                        operatorC++;
                    } 
                    st.pop();
                }
                st.pop();
                if( operatorC == 0 ){
                    return true;
                }
                
            }
        }
    }
    return false;
}


*/