#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int lengthOfLongestSubstring(string s){

        int left = 0;
        int maxLen = 0;
        unordered_map<char,int> mp;

        for( int right = 0 ; right < s.size() ; right++ ){
            char ch = s[right];
            if( mp.find(ch) != mp.end() && mp[ch] >= left ){
                left = mp[ch] + 1;
            }
            maxLen = max(right-left+1, maxLen);
            mp[ch] = right;
        }

        return maxLen;

    }
};

*/