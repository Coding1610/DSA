#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void solve( int index , vector<int>& arr , vector<vector<int>>& ans , vector<int>& temp , int sum ){

        // Base Case
        if( sum == 0 ){
            ans.push_back(temp);
            return;
        }

        for( int i = index ; i < arr.size() ; i++ ){
            if( i > index && arr[i] == arr[i-1] ) continue;
            if( arr[i] > sum ) break;
            temp.push_back( arr[i] );
            solve( i+1 , arr , ans , temp , sum-arr[i] );
            temp.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target){

        int index = 0;
        vector<int> temp;
        vector<vector<int>> ans;
        sort( candidates.begin() , candidates.end() );
        solve( index , candidates , ans , temp , target );
        return ans;

    }
    
};

*/