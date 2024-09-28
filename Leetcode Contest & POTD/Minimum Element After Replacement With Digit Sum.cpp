#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int minElement(vector<int>& nums){

        int mini = INT_MAX;

        for( int i = 0 ; i < nums.size() ; i++ ){

            int ans = 0;
            
            while( nums[i] != 0 ){
                ans += nums[i]%10;
                nums[i] = nums[i]/10;
            }

            mini = min( ans , mini );

        }

        return mini;
        
    }
};

*/