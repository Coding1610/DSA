#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    bool backTrack( int index, vector<int>& ans, vector<bool>& used, int n ){

        if( index == ans.size() ) return true;

        if( ans[index] != 0 ) return backTrack( index+1, ans, used, n );

        for( int num = n ; num >= 1 ; --num ){
  
            if( used[num] ) continue;
            int pos = ( num == 1 ) ? index : index + num;
            if( pos >= ans.size() || ans[pos] != 0 ) continue;

            ans[index] = ans[pos] = num;
            used[num] = true;
  
            if( backTrack(index+1, ans, used, n) ) return true;
            ans[index] = ans[pos] = 0;
            used[num] = false;
  
        }

        return false;
    
    }

    vector<int> constructDistancedSequence(int n){

        vector<int> ans( 2*n-1, 0 );
        vector<bool> used(n+1,false);
        backTrack(0, ans, used, n);
        return ans;
        
    }
};

*/