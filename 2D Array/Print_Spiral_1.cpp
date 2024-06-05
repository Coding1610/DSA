#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int sr = 0;
        int sc = 0;
        int er = row-1;
        int ec = col-1;
        int total = row*col;
        int count = 0;

        while( count < total ){

            // Starting Row
            for( int i = sc ; i <= ec && count < total ; i++ ){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;

            // Ending Column
            for( int i = sr ; i <= er && count < total ; i++ ){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;

            // Ending Row
            for( int i = ec ; i >= sc && count < total ; i-- ){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;

            // Starting Column
            for( int i = er ; i >= sr && count < total ; i-- ){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }

        return ans;
        
    }
};
*/