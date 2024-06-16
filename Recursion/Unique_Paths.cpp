#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:

    bool isSafe( vector<vector<int>>& arr , vector<vector<int>>& visited , int m , int n , int x , int y ){
        return ( x >= 0 && x < m && y >= 0 && y < n && arr[x][y] == 1 && visited[x][y] == 0 );
    }

    int solve( vector<vector<int>>& arr , vector<vector<int>>& visited , vector<vector<int>>& memo , int x , int y , int m , int n ){

        // Base Case
        if (x == m-1 && y == n-1) {
            return 1;
        }

        if (memo[x][y] != -1) {
            return memo[x][y];
        }

        visited[x][y] = 1;

        int paths = 0;

        // Down
        int newx = x + 1;
        int newy = y;
        if ( isSafe( arr , visited , m , n , newx , newy ) ) {
            paths += solve( arr , visited , memo , newx , newy , m , n );
        }

        // Right
        newx = x;
        newy = y + 1;
        if ( isSafe( arr , visited , m , n , newx , newy ) ) {
            paths += solve( arr , visited , memo , newx , newy , m , n );
        }

        visited[x][y] = 0;

        memo[x][y] = paths;
        return paths;

    }

    int uniquePaths(int m, int n){

        vector<vector<int>> arr(m, vector<int>(n, 1));
        vector<vector<int>> visited(m, vector<int>(n, 0));
        vector<vector<int>> memo(m, vector<int>(n, -1));
        return solve(arr, visited, memo, 0, 0, m, n);

    }
};
*/