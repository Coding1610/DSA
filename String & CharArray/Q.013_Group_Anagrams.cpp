#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

         unordered_map<string, vector<string>> mp;
        for( string s : strs ){
            string word = s;
            sort(s.begin() , s.end());
            mp[s].push_back(word);
        }

        vector<vector<string>> ans;
        for( auto it : mp ){
            ans.push_back(it.second);
        }
        return ans;
    }
};
*/