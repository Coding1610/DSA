#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k){
        
        int r = matrix.size();
        int n = r*r;

        priority_queue<int> maxHeap;

        for( int i = 0 ; i < r ; i++ ){
            for( int j = 0 ; j < r ; j++ ){
                maxHeap.push( matrix[i][j] ); 
            }
        }

        int index = n-k;

        while( index != 0 ){
            maxHeap.pop();
            index--;
        }

        return maxHeap.top();

    }
};

*/