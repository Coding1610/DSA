#include<bits/stdc++.h>
using namespace std;

/* LeetCode

class Solution {
public:
   vector<int> findDiagonalOrder(vector<vector<int>>& mat){

        vector<int> res;

        int i = 0;
        int j = 0;
        int n = mat.size();
        int m = mat[0].size();
        int add = -1;

        res.push_back(mat[i][j]);

        while( i < n - 1 || j < m - 1 ){

            if( j < m - 1 && ((i == 0 && add == -1) || (i == n - 1 && add == 1)) ){
                ++ j;
                add = -add;
            }
            else if( (j == 0 && add == 1) || (j == m - 1 && add == -1) ){
                ++ i;
                add = -add;
            } 
            else{
                i += add;
                j -= add;
            }
            res.push_back(mat[i][j]);
        }
        return res;
    }
};
*/

/* Coding Ninjas

void PrintDiagonals(int **arr, int row, int col){
	
	for( int k = 0 ; k < row ; k++ {

        int i = k;
        int j = 0;

        while( i >= 0 && j < col ){
            cout << arr[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }

    for( int k = 1 ; k < col ; k++ ){
        
		int i = row - 1;
        int j = k;

        while( i >= 0 && j < col ){
            cout << arr[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }
}

[[1,2,3],[4,5,6],[7,8,9]]

1
4 2
7 5 3 
8 6
9

*/