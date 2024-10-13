#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x){

        int n = nums.size();
        vector<int> ans(n-k+1);

        for( int i = 0 ; i < n-k+1 ; i++ ){

            map<int,int> mp;

            for( int j = i ; j < i+k ; j++ ){
                mp[nums[j]]++;
            }

            vector<pair<int,int>> arr;

            for( auto it : mp ){
                arr.push_back({it.second,it.first});
            }

            sort( arr.begin() , arr.end() , greater<pair<int,int>>() );

            for( int j = 0 ; j < arr.size() && j < x ; j++ ){
                ans[i] += arr[j].first * arr[j].second;
            }

        }

        return ans;
        
    }
};

*/