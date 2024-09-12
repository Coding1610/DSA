#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words){

        unordered_map<char,bool> mpp;

        for( int i = 0 ; i < allowed.size() ; i++ ){
            char ch = allowed[i];
            mpp[ch] = true;
        }

        int count = 0;

        for( int i = 0 ; i < words.size() ; i++ ){

            string s = words[i];

            for( int i = 0 ; i < s.size() ; i++ ){

                if( mpp.count(s[i]) == false ){
                    break;
                }

                else{
                    if( i == s.size()-1 ){
                        count++;
                    }
                }
                
            }

        }

        return count;
        
    }
};

*/