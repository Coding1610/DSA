#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<string> stringSequence(string target) {
        
        string s = "";

        vector<string> ans;
    
        for( int i = 0 ; i < target.size() ; i++ ){
        
            s += 'a';

            if( s[i] != target[i] ){
                while( s[i] != target[i] ){
                    ans.push_back(s); 
                    char ch = s[i];
                    s[i] = ch+1;
                }
            }  

            ans.push_back(s); 

        }

        return ans;

    }
};

*/