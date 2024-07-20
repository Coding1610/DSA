#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {

        int row = rowSum.size();
        int col = colSum.size();

        vector<vector<int>> newMatrix( row , vector<int>(col,0) );

        for( int i = 0 ; i < row ; i++ ){
            for( int j = 0 ; j < col ; j++ ){
                newMatrix[i][j] = min(rowSum[i],colSum[j]);
                rowSum[i] -= newMatrix[i][j];
                colSum[j] -= newMatrix[i][j];
            }   
        }

        return newMatrix;
        
    }
};

*/