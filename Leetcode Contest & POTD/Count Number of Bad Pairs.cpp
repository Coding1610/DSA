#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    long long countBadPairs(vector<int>& nums){
        
        long long goodPairs = 0;
        long long n = nums.size();
        unordered_map<int,int> mp;

        for( int i = 0 ; i < n ; i++ ){
            int key = nums[i]-i;
            goodPairs += mp[key];
            mp[key]++;
        }

        long long totalNumberOfPairsOfAnyArray = (n*(n-1))/2;

        return totalNumberOfPairsOfAnyArray - goodPairs;
        
    }
};

*/