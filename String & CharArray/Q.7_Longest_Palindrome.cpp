#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int longestPalindrome(string s) {

        int len = 0;
        int remain = 0;

        unordered_map<char,int> m;

        for( auto ch : s ){
            m[ch]++;
        }

        for( auto it = m.begin() ; it != m.end() ; it++ ){

            if( remain == 0 ){
                if( it->second%2 == 1 ){
                    remain++;
                }
            }
            len += it->second/2;
        }
        
        return len*2 + remain;
    }
};
*/