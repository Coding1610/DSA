#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> ans;

        // First Position
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int position = -1;
        
        while( s <= e ){

            if( nums[mid] == target ){
                position = mid;
                e = mid-1;
            }
            else if( nums[mid] < target ){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        ans.push_back(position);

        // Last Position
        s = 0;
        e = nums.size()-1;
        mid = s+(e-s)/2;
        position = -1;

        while( s <= e ){

            if( nums[mid] == target ){
                position = mid; 
                s = mid+1;
            }
            else if( nums[mid] < target ){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        ans.push_back(position);

        if( ans.size() == 0 ){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        } 
        else{
            return ans;
        }
    }
};
*/