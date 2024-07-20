#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = gas.size();
        int totalGas = 0;
        int balanceGas = 0;
        int startIndex = 0;

        for( int i = 0 ; i < n ; i++ ){

            totalGas += gas[i] - cost[i];
            balanceGas += gas[i] - cost[i];
            if( balanceGas < 0 ){
                startIndex = i+1;
                balanceGas = 0;
            }

        }

        return ( totalGas < 0 ) ? -1 : startIndex ; 
        
    }
};

*/