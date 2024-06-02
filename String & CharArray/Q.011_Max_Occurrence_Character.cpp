#include<bits/stdc++.h>
using namespace std;

/*
class Solution
{
    public:
    char getMaxOccuringChar(string str){
        
        unordered_map<char,int> mapp;
        char ch;
        
        for( char ch : str ){
            mapp[ch]++;
        }
        
        int maxi = -1;
        for( auto it : mapp ){
            if( maxi < it.second ){
                maxi = it.second;
                ch = it.first;
            }
        }
        return ch;
    }
};
*/