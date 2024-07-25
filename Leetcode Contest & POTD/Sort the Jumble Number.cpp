#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int newNumber( int num , vector<int> mp ){

        int i = 1;

        if( num == 0 ){
            return mp[0];
        }

        int newNum = 0;

        while( num ){
            int rem = num%10;
            num /= 10;
            newNum += mp[rem]*i;
            i *= 10;
        }

        return newNum;
        
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int> oldMapNew;

        for( int i = 0 ; i < n ; i++ ){
            int num = nums[i];
            oldMapNew[nums[i]] = newNumber( num , mapping );
        }

        sort( nums.begin() , nums.end() , [&oldMapNew](int a , int b ){
            return oldMapNew[a] < oldMapNew[b];
        });

        return nums;
        
    }
};

*/