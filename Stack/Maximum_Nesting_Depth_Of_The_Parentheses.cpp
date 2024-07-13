#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int maxDepth(string s){

        int size = 0;
        stack<char> st;

        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == '(' ){
                st.push(s[i]);
            }

            if( s[i] == ')' && !st.empty() ){
                if( st.size() > size ){
                    size = st.size();
                }
                st.pop();
            }

        }

        return size;
        
    }
};

*/