#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {

        int cnt = 0;

        unordered_set<string> st(bannedWords.begin(), bannedWords.end());

        for( auto it : message ) {
            if( st.find(it) != st.end() ) cnt++;
        } 
        
        return ( cnt >= 2 );
        
    }
};

*/