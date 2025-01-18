#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid){

        vector<int> ans;

        for( int r = 0 ; r < grid.size() ; r++ ){

            // Even Row Even Index Element
            if( r%2 == 0 ){
                for( int c = 0 ; c < grid[0].size() ; c++ ){
                    if( c%2 == 0 ){
                        ans.push_back(grid[r][c]);
                    }
                }
            }

            // Odd Row Odd Index Element
            else{
                for( int c = grid[0].size()-1 ; c >= 0 ; c-- ){
                    if( c%2 != 0 ){
                        ans.push_back(grid[r][c]);
                    }
                }
            }

        }
        
        return ans;

    }
};

*/