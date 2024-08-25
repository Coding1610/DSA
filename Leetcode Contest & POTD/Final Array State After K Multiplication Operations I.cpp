#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int findMinIndex( vector<int> nums ){

        int mini = INT_MAX;
        int index = -1;
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( mini > nums[i] ){
                mini = nums[i];
                index = i;
            }
        }
        return index;
    }

    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        if( k == 0 || multiplier == 1 ){
            return nums;
        }

        for( int i = 0 ; i < k ; i++ ){

            int index = findMinIndex( nums );
            nums[index] = nums[index]*multiplier;

        }

        return nums;
    }
};

*/