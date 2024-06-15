#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:

    void solve( set<vector<int>>& st , vector<int> nums , int index ){

        // Base Case
        if( index >= nums.size() ){
            st.insert(nums);
            return;
        }

        for( int i = index ; i < nums.size() ; i++ ){

            swap(nums[index],nums[i]);
            //Recursion Call
            solve( st , nums , index+1 );
            // Back Track
            swap(nums[index],nums[i]);
        }

    }

    vector<vector<int>> permuteUnique(vector<int>& nums){

        int index = 0;
        set<vector<int>> st;
        vector<vector<int>> ans;
        solve( st , nums , index );

        for( auto it : st ){
            ans.push_back(it);
        }
        return ans;
    }
};
*/