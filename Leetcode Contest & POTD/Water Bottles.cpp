#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange){

        int d = 0;
        int n = numBottles;
        int k = numExchange;

        while( n >= k ){

            int down = n%k;
            int up = n/k;
            d += up;
            n = down + up;

        } 

        return (d+numBottles);
        
    }
};

*/