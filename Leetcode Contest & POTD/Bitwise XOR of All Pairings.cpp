#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int xorAllNums(vector<int>& nums1 , vector<int>& nums2){

        int x1 = 0;
        int x2 = 0;

        int len1 = nums1.size();
        int len2 = nums2.size();

        if( len1 % 2 != 0 ){
            for( int num : nums2 ){
                x2 ^= num;
            }
        }

        if( len2 % 2 != 0 ){
            for( int num : nums1 ){
                x1 ^= num;
            }
        }

        return x1 ^ x2;
        
    }
};

*/