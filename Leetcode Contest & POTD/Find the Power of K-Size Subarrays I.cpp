#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k){

        if( k == 1 ){
            return nums;
        }

        int i = 1;
        int cs = 1;
        int n = nums.size();

        vector<int> ans;

        while( i < n ){

            if( nums[i]-1 == nums[i-1] ){
                cs += 1;
            }

            else{
                cs = 1;
            }

            if( i >= k-1 ){
                ans.push_back( cs >= k ? nums[i] : -1 );
            }
            
            i += 1;

        }

        return ans;
        
    }
};

*/