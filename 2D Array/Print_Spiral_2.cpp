#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> matrix(n,vector<int>(n));
        int row = n;
        int col = n;
        int sr = 0;
        int sc = 0;
        int er = row-1;
        int ec = col-1;
        int count = 0;
        int total = n*n;

        while( count < total ){

            // Starting Row
            for( int i = sc ; i <= ec && count < total ; i++ ){
                matrix[sr][i] = ++count;
                // count++;
            }
            sr++;

            // Ending Column
            for( int i = sr ; i <= er && count < total ; i++ ){
                matrix[i][ec] = ++count;
                // count++;
            }
            ec--;

            // Ending Row
            for( int i = ec ; i >= sc && count < total ; i-- ){
                matrix[er][i] = ++count;
                // count++;
            }
            er--;

            // Starting Column
            for( int i = er ; i >= sr && count < total ; i-- ){
                matrix[i][sc] = ++count;
                // count++;
            }
            sc++;
        }

        return matrix;
        
    }
};
*/