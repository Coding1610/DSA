#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr){

        unordered_map<int,int> mp;

        int n = arr.size();

        vector<int> ans = arr;

        sort( ans.begin() , ans.end() );
        ans.erase( unique(ans.begin(),ans.end()) , ans.end() );

        for( int i = 0 ; i < ans.size() ; i++ ){
            mp[ans[i]] = i+1;
        }

        for( int i = 0 ; i < n ; i++ ){
            arr[i] = mp[arr[i]];
        }

        return arr;
        
    }
};

*/