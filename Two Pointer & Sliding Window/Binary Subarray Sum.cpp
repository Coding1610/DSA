#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int findSum( vector<int> &nums , int goal ){

        // Base Case
        if( goal < 0 ) return 0;

        int sum = 0;
        int left = 0;
        int count = 0;

        for( int right = 0 ; right < nums.size() ; right++ ){

            sum += nums[right];

            while( sum > goal ){
                sum -= nums[left];
                left++;
            }

            count += (right-left+1);

        }

        return count;

    }

    int numSubarraysWithSum(vector<int>& nums, int goal){
        return (findSum(nums, goal) - findSum(nums, goal-1);
    }

};

*/