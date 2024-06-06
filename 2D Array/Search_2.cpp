#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int s = 0;
        int e = col-1;

        while( s < row && e >= 0 ){

            if( matrix[s][e] == target ){
                return true;
            }
            else if( matrix[s][e] < target ){
                s++;
            }
            else{
                e--;
            }
        }
        return false;
    }
};
*/