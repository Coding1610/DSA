#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums){

        unordered_map<int,int> mapp;

        for( int n : nums ){
            mapp[n]++;
        }

        sort( nums.begin() , nums.end() , [&](int a , int b){
            
            if( mapp[a] != mapp[b] ){
                return mapp[a] < mapp[b];
            }

            return a > b;

        });

        return nums;       
    }

};

*/