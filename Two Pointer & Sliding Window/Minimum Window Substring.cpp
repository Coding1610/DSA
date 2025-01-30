#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    string minWindow(string s, string t){

        int left = 0;
        int count = 0;
        int index = left;
        int minLen = INT_MAX;
        unordered_map<char,int> mp;

        for( int i = 0 ; i < t.size() ; i++ ) mp[t[i]]++;

        for( int right = 0 ; right < s.size() ; right++ ){

            if( mp[s[right]] > 0 ) count++;

            mp[s[right]]--;

            if( count == t.size() ){
                while( count == t.size() ){
                    if( right - left + 1 < minLen ){
                        minLen = right - left + 1;
                        index = left;
                    }
                    mp[s[left]]++;
                    if( mp[s[left]] > 0 ) count--;
                    left++;
                }
            }


        }

        return (minLen == INT_MAX) ? "" : s.substr(index,minLen);

    }
};

*/