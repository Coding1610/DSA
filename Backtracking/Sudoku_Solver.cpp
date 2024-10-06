#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public: 

    bool isSafe( char val , int row , int col , vector<vector<char>>& board ){

        for( int i = 0 ; i < 9 ; i++ ){

            // Same Row
            if( board[row][i] == val ){
                return false;
            }

            // Same Col
            if( board[i][col] == val ){
                return false;
            }

            // 3x3 Matrix
            if( board[3*(row/3) + i/3][3*(col/3) + i%3] == val ){
                return false;
            }

        }

        return true;

    }

    bool solve( vector<vector<char>>& board , char numbers[] ){

        for( int row = 0 ; row < 9 ; row++ ){
            for( int col = 0 ; col < 9 ; col++ ){
                if( board[row][col] == '.' ){
                    for( int i = 0 ; i < 9 ; ++i ){
                        if( isSafe( numbers[i] , row , col , board ) ){
                            board[row][col] = numbers[i];
                            bool nextMove = solve( board , numbers );
                            if( nextMove ){
                                return true;
                            }
                            else{
                                board[row][col] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {

        char numbers[9];
    
        for( int i = 0 ; i < 9 ; ++i ){
            numbers[i] = '1' + i;
        }

        solve( board , numbers ); 
          
    }

};

*/