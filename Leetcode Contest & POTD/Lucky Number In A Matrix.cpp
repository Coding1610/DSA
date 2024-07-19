#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix){

        int row = matrix.size();
        int col = matrix[0].size();

        int rowMin = INT_MIN;

        for( int i = 0 ; i < row ; i++ ){
            int mini = matrix[i][0];
            for( int j = 1 ; j < col ; j++ ){
                mini = min(matrix[i][j],mini);
            }
            rowMin = max(rowMin,mini);
        }

        int colMax = INT_MAX;

        for( int i = 0 ; i < col ; i++ ){
            int maxi = matrix[0][i];
            for( int j = 1 ; j < row ; j++ ){
                maxi = max(matrix[j][i],maxi);
            }
            colMax = min(maxi,colMax);
        }

        if( colMax == rowMin ){
            return {colMax};
        }
        
        return {};
        
    }
};

*/