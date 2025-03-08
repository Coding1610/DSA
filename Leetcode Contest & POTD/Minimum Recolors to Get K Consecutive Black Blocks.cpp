#include<bits/stdc++.h>
using namespace std;    

/*

class Solution {
public:
    int minimumRecolors(string blocks, int k){

        int i = 0, j = 0;
        int minOp = 0;
        int ans = INT_MAX;

        while( i <= blocks.size() - k ){

            if( blocks[j] == 'W' ){ 
                minOp++;
            }

            if( j - i + 1 < k ){
                j++;
            }

            else {
                ans = min(ans, minOp);
                if( blocks[i] == 'W' ){
                    minOp--;
                }
                i++;
                j++;
            }
            
        }

        return ans;

    }
};

*/