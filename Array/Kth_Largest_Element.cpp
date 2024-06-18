#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        sort( nums.begin() , nums.end() , greater<int>() );
        return nums[k-1];
    }
};