#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {

        int n = customers.size();

        long long int finishTime = customers[0][0] + customers[0][1];
        long long int waitTime = finishTime - customers[0][0];

        for( int i = 1 ; i < n ; i++ ){

            if( finishTime < customers[i][0] ){
                finishTime = customers[i][0];
            }

            finishTime += customers[i][1];
            waitTime += finishTime - customers[i][0];

        }
        
        return (double) (waitTime)/n;
        
    }
};

*/