#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime){

        int minTime = 0;
        int n = colors.size();

        for( int i = 0 ; i < n-1 ; i++ ){
            if( colors[i] == colors[i+1] ){
                if( neededTime[i+1] < neededTime[i] ){
                    minTime += neededTime[i+1];
                    neededTime[i+1] = neededTime[i];
                }
                else{
                    minTime += neededTime[i];
                }
            }
        }

        return minTime;
        
    }
};

*/