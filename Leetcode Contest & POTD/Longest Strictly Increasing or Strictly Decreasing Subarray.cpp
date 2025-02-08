#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums){

        int in = 1;
        int de = 1;
        int maxLen = 1;

        for( int i = 1 ; i < nums.size() ; i++ ){
            if( nums[i] > nums[i-1] ){
                in++; 
                de = 1;
            }
            else if( nums[i] < nums[i-1] ){
                de++; 
                in = 1;
            }
            else{
                in = 1;
                de = 1;
            }
            maxLen = max( maxLen, max(in,de) );
        }

        return maxLen;
        
    }
};

*/