#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthSmallest(std::vector<int>& nums, int k) {
        sort( nums.begin() , nums.end() );
        return nums[k-1];
    }
};