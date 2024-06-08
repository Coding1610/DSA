#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int Sum = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i - 1] == 0 && nums[i] == 0) {
                return true;      
            }
            
            Sum += nums[i];
            
            if (Sum % k == 0)      
                return true;
            
            int j = 0;
            int tempSum = Sum;
            
            while ((i - j) > 1 && tempSum >= k) {
                tempSum -= nums[j];
                j++;
                  
                if (tempSum % k == 0) {
                    return true;
                }
            }
        }
        return false;
    }
};
*/