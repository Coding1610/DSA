#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void addAnswer( vector<vector<string>>& ans , vector<vector<char>>&board , int n ){

        vector<string> temp;
        for( int row = 0 ; row < n ; row++ ){
            string str = "";
            for( int col = 0 ; col < n ; col++ ){
                str += board[row][col]; 
            }
            temp.push_back(str);
        }
        ans.push_back(temp);

    }

    bool isSafe( int row , int col , vector<vector<char>>&board , int n ){

        // Same Row
        int x = row;
        int y = col;
        while( y >= 0 ){
            if( board[x][y] == 'Q' ){
                return false;
            }
            y--;
        }

        // Upper Diagonal
        x = row;
        y = col;
        while( x >= 0 && y >= 0 ){
            if( board[x][y] == 'Q' ){
                return false;
            }
            x--;
            y--;
        }

        // Lower Diagonal
        x = row;
        y = col;
        while( x < n && y >= 0 ){
            if( board[x][y] == 'Q' ){
                return false;
            }
            x++;
            y--;
        }


        return true;
        
    }

    void solve( int col , vector<vector<string>>&ans , vector<vector<char>>&board , int n ){

        // Base Case
        if( col == n ){
            addAnswer( ans , board , n );
            return;
        }

        // Try On First Column
        for( int row = 0 ; row < n ; row++ ){
            if( isSafe( row , col , board , n ) ){
                board[row][col] = 'Q';
                solve( col+1 , ans , board , n );
                // Bactracking
                board[row][col] = '.';
            }
        }

    }

    vector<vector<string>> solveNQueens(int n){

        int col = 0;
        vector<vector<string>> ans;
        vector<vector<char>> board(n,vector<char>(n,'.'));
        solve( col , ans , board , n );
        return ans;

    }

};

*/