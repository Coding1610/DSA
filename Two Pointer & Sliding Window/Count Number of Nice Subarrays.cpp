#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int findSubarray( vector<int> nums , int k ){

        int odd = 0;
        int left = 0;
        int count = 0;

        for( int right = 0 ; right < nums.size() ; right++ ){

            if( nums[right]%2 != 0 ) odd++;
            
            while( odd > k ){
                if( nums[left]%2 != 0 ) odd--;
                left++;
            }

            count += (right-left+1);

        }

        return count;

    }

    int numberOfSubarrays(vector<int>& nums, int k){
        return findSubarray(nums,k) - findSubarray(nums,k-1);
    }

};

*/