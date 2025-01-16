#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// you need to implement this function only
void rotate(vector<vector<int>>& matrix) {
   
    int s = matrix.size();

    vector<vector<int>> rotateMatrix = matrix;

    for( int i = 0 ; i < s ; i++ ){
        for( int j = 0 ; j < s ; j++ ){
            matrix[i][j] = rotateMatrix[s-1-j][i];
        }
    }

    return;

}

int main() {
    vector<vector<int>> matrix;
    int n;
    cin >> n;
    // please don't modify the main function
    for (int i = 0; i < n; i++) {
        vector<int> row;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            row.push_back(x);
        }
        matrix.push_back(row);
    }
    rotate(matrix);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                cout << matrix[i][j];
            } else {
                cout << matrix[i][j] << " ";
            }
        }
        if (i != n - 1) { 
            cout << endl;
        }
    }
    return 0;
}