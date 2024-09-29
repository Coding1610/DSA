#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    char kthCharacter(int k) {
        
        if( k == 1 ){
            return 'a';
        }

        string s = "a";

        while( s.size() <= k ){

            string newS = "";

            for( int i = 0 ; i < s.size() ; i++ ){
                char ch = s[i]+1;
                newS += ch;
            }

            s += newS;

        }

        return s[k-1];
        
    }
};

*/