#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int characterReplacement(string s, int k){

        int left = 0;
        int maxLen = 0;
        int maxFreq = 0;

        unordered_map<char,int> mp;

        for( int right = 0 ; right < s.size() ; right++ ){

            mp[s[right]]++;
            maxFreq = max( maxFreq, mp[s[right]] );

            if( (right-left+1) - maxFreq > k ){
                mp[s[left]]--;
                left += 1;
                maxFreq = 0;
            }

            if( (right-left+1) - maxFreq <= k ){
                maxLen = max( maxLen, (right-left+1) );
            }

        }

        return maxLen;
        
    }
};

*/