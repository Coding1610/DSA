#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:

    void solve( vector<vector<int>>& ans , vector<int>& nums , int index ){

        // Base Case
        if( index >= nums.size() ){
            ans.push_back(nums);
            return;
        }

        for( int i = index ; i < nums.size() ; i++ ){
            swap(nums[index],nums[i]);
            // Recursion Call
            solve( ans , nums , index+1 );
            // Back Track
            swap(nums[index],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums){

        vector<vector<int>> ans;
        int index = 0;

        solve( ans , nums , index );
        return ans;
    }
};
*/