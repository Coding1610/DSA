#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int digitSum( int n ){
        int sum = 0;
        while(n){
            sum += n%10;
            n = n/10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums){

        int maxi = -1;
        unordered_map<int,int> mp;

        for( int i = 0 ; i < nums.size() ; i++ ){
            int sum = digitSum(nums[i]);
            auto it = mp.find(sum);
            if( it != mp.end() ){
                maxi = max( maxi, it->second + nums[i] );
                mp[sum] = max(it->second , nums[i]);
            }
            else{   
                mp[sum] = nums[i];
            }
        }

        return maxi;
        
    }
};

*/