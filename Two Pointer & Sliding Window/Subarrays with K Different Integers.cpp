#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int findSubarray( vector<int> nums , int k ){

        int left = 0;
        int count = 0;
        unordered_map<int,int> mp;

        for( int right = 0 ; right < nums.size() ; right++ ){

            mp[nums[right]]++;

            while( mp.size() > k ){
                mp[nums[left]]--;
                if( mp[nums[left]] == 0 ) mp.erase(nums[left]);
                left++;
            }

            count += (right-left+1);

        }

        return count;

    }

    int subarraysWithKDistinct(vector<int>& nums, int k){
        return findSubarray(nums,k) - findSubarray(nums,k-1);
    }
    
};

*/