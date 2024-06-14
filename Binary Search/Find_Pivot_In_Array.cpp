#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;

        while( s <= e ){
            
            if( nums[mid] >= nums[0] ){
                s = mid+1;
            }
            else{
                e = mid; // e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
};
*/