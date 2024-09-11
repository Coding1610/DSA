#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        
        int ans1 = 0;
        for(int i = 0 ; i < m ; i++ ){
            auto arr = grid[i];
            int k = 0;
            int l = n-1;
            while( k <= l ){
                if( arr[k] != arr[l] ) ans1++;
                k++;
                l--;
            }
        }
        
        int ans2 = 0;
        for(int j = 0 ; j < n ; j++ ){
            vector<int>arr;
            for( int i = 0 ; i <m ; i++ ){
                arr.push_back( grid[i][j] );
            }
            int k = 0;
            int l = m-1;
            while( k <= l ){
                if( arr[k] != arr[l] ){
                    ans2++;
                }
                k++;
                l--;
            }
        }

        return min(ans1,ans2);

    }
};

*/