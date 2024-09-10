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
        vector<int> ans;
        int n = nums.size();

        while( i < n ){

            long long int el = nums[i];
            long long int pel = nums[i-1];

            if( el-1 == pel ){
                cs += 1;
            }

            else{
                cs = 1;
            }

            if( i >= k-1 ){
                ans.push_back( cs >= k ? el : -1 );
            }
            
            i += 1;

        }

        return ans;
        
    }
};

*/