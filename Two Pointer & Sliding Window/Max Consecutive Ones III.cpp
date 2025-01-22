#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int longestOnes(vector<int>& nums, int k){

        int zero = 0;
        int left = 0;
        int maxLen = 0;
        int n = nums.size();

        for( int right = 0 ; right < n ; right++ ){

            if( nums[right] == 0 ) zero++;

            if( nums[right] == 0 && zero > k ){
                while( nums[left] != 0 ){
                    left++;
                }
                zero--;
                left++;
            }

            maxLen = max(maxLen,right-left+1);

        }   
        
        return maxLen;

    }
};

*/