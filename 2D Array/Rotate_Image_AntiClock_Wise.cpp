#include<bits/stdc++.h>
using namespace std;

/* Coding Ninjas - with extra space

vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix){

    int row = matrix.size();
    int col = matrix[0].size();
    int index = row-1;

    vector<vector<int>> newMate( col , vector<int>(row) );

    for( int i = 0 ; i < col ; i++ ){
        for( int j = 0 ; j < row ; j++ ){
            newMate[index][j] = matrix[j][i];
        }
        index--;
    }

    return newMate;
}

*/

