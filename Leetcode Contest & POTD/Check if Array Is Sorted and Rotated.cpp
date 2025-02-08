#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    bool check(vector<int>& nums){

        int count = 0;
        int n = nums.size();

        for( int i = 1 ; i < n ; i++ ){
            if( nums[i] < nums[i-1] ) count++;
        }

        return ( nums[0] >= nums.back() && count == 1 ) || count == 0; // second condition is for nums is already sorted        
        
    }
};

*/