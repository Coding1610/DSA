#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
private:

    void solve( vector<int> arr , set<vector<int>>& st , int index , vector<int> output ){

        // Base Case
        if(index >= arr.size()){
            st.insert(output);
            return;
        }

        // Exclude - Recursion Call
        solve( arr , st , index+1 , output );

        // Include - Recursion Call 
        int element = arr[index];
        output.push_back(element);
        solve( arr , st , index+1 , output );

    }

public:

    vector<vector<int>> subsetsWithDup(vector<int>& nums){

        int index = 0;
        vector<int> output;
        set<vector<int>> st;
        vector<vector<int>> ans;

        sort(nums.begin() , nums.end());
        
        solve( nums , st , index , output );

        for( auto it : st ){
            ans.push_back(it);
        }

        return ans;
    }
};
*/