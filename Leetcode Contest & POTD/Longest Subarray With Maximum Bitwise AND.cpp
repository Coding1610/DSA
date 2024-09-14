#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int longestSubarray(vector<int>& nums){

        int n = nums.size();
        int maxi = *max_element( nums.begin() , nums.end() );

        int len = 0;
        int maxLen = 0;

        for( int i = 0 ; i < n ; i++ ){
            if( nums[i] == maxi ){
                len++;
            }
            else{
                len = 0;
            }
            maxLen = max(len,maxLen);
        }

        return maxLen;
        
    }
};

*/