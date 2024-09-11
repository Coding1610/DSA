#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick){

        vector<vector<int>> ans(n,vector<int>(11,0));

        for( auto& p : pick ){
            ans[p[0]][p[1]]++;
        }

        int count = 0;

        for( int i = 0 ; i < n ; i++ ){
            for( auto &clr : ans[i] ){
                if( clr > i ){
                    count++;
                    break;
                }
            }
        }

        return count;
        
    }
};

*/