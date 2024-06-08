#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size(); 
        int zeroCount = 0;
        vector<pair<int,int>> index;

        for( int i = 0 ; i < row ; i++ ){
            for( int j = 0 ; j < col ; j++ ){
                if( matrix[i][j] == 0 ){
                    zeroCount++;
                    index.push_back(make_pair(i,j));
                }
            }
        }

        for( int i = 0 ; i < index.size() ; i++ ){
            for( int r = 0 ; r < row ; r++ ){
                matrix[r][index[i].second] = 0;
            }
            for( int c = 0 ; c < col ; c++ ){
                matrix[index[i].first][c] = 0;
            }
        }        
    }
};
*/