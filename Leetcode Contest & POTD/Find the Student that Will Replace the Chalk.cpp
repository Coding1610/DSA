#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k){

        int index = -1;
        int n = chalk.size();

        if( n == 1 ){
            return 0;
        }

        for( int i = 0 ; i < n ; i++ ){

            if( k < chalk[i] ){
                index = i;
                break;
            }

            k -= chalk[i];

            if( i == n-1 ){
                i = -1;
            }

        }

        return index;
        
    }
};

*/