#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k){

        int prefix = 0;
        vector<int> arr(k,0);
        arr[0] = 1;
        int count = 0;

        for( int i = 0 ; i < nums.size() ; i++ ){

            prefix = ( prefix + nums[i] % k + k ) % k;
            count += arr[prefix];
            arr[prefix]++;
            
        }
        return count;   
    }
};
*/