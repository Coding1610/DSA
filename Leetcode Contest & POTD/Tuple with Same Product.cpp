#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int tupleSameProduct(vector<int>& nums){

        int ans = 0;
        unordered_map<int,int> mp;

        for( int i = 0 ; i < nums.size()-1 ; i++ ){
            for( int j = i+1 ; j < nums.size() ; j++ ){
                ans += 8 * mp[nums[i]*nums[j]];
                mp[nums[i]*nums[j]]++;
            }
        }   

        return ans;
    }
};

*/