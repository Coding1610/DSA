#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    long long findMaximumScore(vector<int>& nums){

        int n = nums.size();
        long long int ans = 0;
        long long int element = nums[0];
        
        int j = 0;
        
        for( int i = 1 ; i < n ; i++ ){
            
            if( nums[i] > element ){

                ans += element*(i-j);
                element = nums[i];
                j = i;
                i = j;

            }
            
        }

        ans += element*(n-1-j);

        return ans;
        
    }
};

*/