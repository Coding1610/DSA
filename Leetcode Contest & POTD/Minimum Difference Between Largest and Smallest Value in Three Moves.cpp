#include<bits/stdc++.h>
using namespace std;

/* 

class Solution {
public:
    int minDifference(vector<int>& nums){
        
        int n = nums.size();

        if( n <= 4 ){
            return 0;
        }
        
        sort(nums.begin(), nums.end());

        int low = 0;
        int minDiff = INT_MAX;

        for( int high = n-4 ; high < n ; high++ ){
            int diff = nums[high] - nums[low];
            minDiff = min(diff, minDiff);
            low++;
        }

        return minDiff;
        
    }
};

*/