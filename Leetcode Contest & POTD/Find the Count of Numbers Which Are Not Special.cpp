#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    bool isPrime( int num ){

        if( num < 2 ){
            return false;
        }

        for( int i = 2 ; i*i <= num ; i++ ){
            if( num%i == 0 ){
                return false;
            }
        }

        return true;
        
    }

    int nonSpecialCount(int l, int r) {

        int count = 0;

        for( int i = 2 ; i*i <= r ; i++ ){
            
            if( isPrime(i) ){
                int sq = i*i;
                if( sq >= l && sq <= r ){
                    count++;
                }
            }

        }

        return r-l-count+1;

    }
};

*/