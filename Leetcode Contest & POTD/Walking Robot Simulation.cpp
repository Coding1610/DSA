#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles){

        int maxAns = 0;

        map<vector<int>,int> mpp;

        for( auto x : obstacles ){
            mpp[x]++;
        }   

        // N E S W
        int direction[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

        // Initially at North
        int x = 0;
        int y = 0;
        int k = 0;

        for( auto c : commands ){

            if( c == -1 ){
                k = (k+1)%4;
            }

            else if( c == -2 ){
                k = (k+3)%4;
            }

            else{

                for( int i = 0 ; i < c ; i++ ){

                    int newX = x+direction[k][0];
                    int newY = y+direction[k][1];

                    if( mpp.count({newX,newY}) ){
                        break;
                    }

                    x = newX;
                    y = newY;

                    maxAns = max( maxAns , x*x+y*y );

                }

            }
        }

        return maxAns;
        
    }
};

*/