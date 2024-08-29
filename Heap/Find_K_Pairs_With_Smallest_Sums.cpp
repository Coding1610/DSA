#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k){

        int count = 0;
        int n1 = nums1.size();
        vector<vector<int>> ans;

        priority_queue< pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>> > minHeap;

        for( int i = 0 ; i < min(k,n1) ; i++ ){
            minHeap.push( { nums1[i]+nums2[0] , {i,0} } );
        }

        while( !minHeap.empty() && count < k ){

            int sum = minHeap.top().first;
            int i = minHeap.top().second.first;
            int j = minHeap.top().second.second;
            minHeap.pop();

            ans.push_back( { nums1[i] , nums2[j] } );

            int newJ = j+1;

            if( nums2.size() > newJ ){
                minHeap.push( { nums1[i]+nums2[newJ] , {i,newJ} } );
            }

            count++;
            
        }

        return ans;
        
    }
};

*/