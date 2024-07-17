#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int firstUniqChar(string s){

        unordered_map<char,int> mapp;

        for( auto it : s ){
            mapp[it]++;
        }

        for( int i = 0 ; i < s.size() ; i++ ){
            if( mapp[s[i]] == 1 ){
                return i;
            }
        }
        
        return -1;
        
    }
};

*/