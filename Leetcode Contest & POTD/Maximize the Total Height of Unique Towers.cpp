#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight){

        int n = maximumHeight.size();

        sort( maximumHeight.begin() , maximumHeight.end() );

        long long int res = maximumHeight.back();

        for( int i = n-2 ; i >= 0 ; i-- ){

            maximumHeight[i] = min( maximumHeight[i] , maximumHeight[i+1]-1 );

            if( maximumHeight[i] <= 0 ){
                return -1;
            }

            res += maximumHeight[i];
            
        }

        return res;

    }
};

*/