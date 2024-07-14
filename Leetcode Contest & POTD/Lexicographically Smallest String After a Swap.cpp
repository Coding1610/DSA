#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    string getSmallestString(string s) {

        for( int i = 0 ; i < s.size()-1 ; i++ ){

            if( (s[i]%2 == 0 && s[i+1]%2 == 0) || (s[i]%2 == 1 && s[i+1]%2 == 1) ){

                if( s[i+1] < s[i] ){

                    char ch = s[i];
                    s[i] = s[i+1];
                    s[i+1] = ch;
                    return s;

                } 
            }
        }
        return s;
    }
};

*/