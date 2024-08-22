#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){

        int n = nums.size();

        unordered_map<int,int> mapp;

        for( int i = 0 ; i < n ; i++ ){
            mapp[nums[i]]++;
        }

        vector<pair<int,int>> p(mapp.begin(),mapp.end());

        sort( p.begin() , p.end() , []( pair<int,int> a , pair<int,int> b ){
            return a.second > b.second;
        }); 

        vector<int> ans;

        for( int i = 0 ; i < k ; i++ ){
            ans.push_back( p[i].first );
        }

        return ans;
    
    }
};

*/