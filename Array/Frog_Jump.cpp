#include<bits/stdc++.h>
using namespace std;

/*
int frogJump( int n , vector<int> &heights )
{

    int prev2= 0; 
    int prev1 = abs( heights[1] - heights[0] );

    for( int i = 2 ; i < n ; i++ ){

        int left = prev1 + abs( heights[i] - heights[i-1] );
        int right = prev2 + abs( heights[i] - heights[i-2] );
        int curr_i = min( left , right );
        prev2 = prev1;
        prev1 = curr_i;
        
    }
    return prev1;
}
*/