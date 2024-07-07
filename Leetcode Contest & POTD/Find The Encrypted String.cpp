#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    string getEncryptedString(string s, int k) {
        
        string ans = "";
        int len = s.size();
        k = k%len;

        for( int i = 0 ; i < len ; i++ ){
            ans.push_back( s[(i+k)%len] ); 
        }

        return ans;
    }
};

*/