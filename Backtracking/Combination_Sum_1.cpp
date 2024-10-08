#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void solve( int index , vector<vector<int>>&ans , vector<int>& arr , vector<int>& combi , int target ){

        // BC1
        if( target == 0 ){
            ans.push_back(combi);
            return;
        }

        // BC2
        if( target < 0 ){
            return;
        }

        // BC3
        if( index == arr.size() ){
            return;
        }

        // Not Take
        solve( index+1 , ans , arr , combi , target );

        // Take 
        combi.push_back( arr[index] );
        solve( index , ans , arr , combi , target-arr[index] );
        combi.pop_back();

    }

    vector<vector<int>> combinationSum( vector<int>& candidates, int target ){

        int index = 0;
        vector<int> combi;
        vector<vector<int>> ans;
        solve( index , ans , candidates ,combi , target );
        return ans;

    }
    
};

*/