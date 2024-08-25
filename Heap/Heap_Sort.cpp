#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void heapify( vector<int>& nums , int n , int i ){

        int l = i;
        int lc = 2*i+1;
        int rc = 2*i+2;

        if( lc < n && nums[lc] > nums[l] ){
            l = lc;
        }

        if( rc < n && nums[rc] > nums[l] ){
            l = rc;
        }
        
        if( l != i ){
            swap( nums[i] , nums[l] );
            heapify( nums , n , l );
        }

    }

    vector<int> sortArray(vector<int>& nums){

        int n = nums.size();
        int size = n;

        for( int i = (n/2)-1 ; i >= 0 ; i-- ){
            heapify( nums , n , i );
        }

        while( size > 0 ){
            swap( nums[0] , nums[size-1] );
            size -= 1;
            heapify( nums , size , 0 );
        }

        return nums;

    }

};

*/