#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void solve( int index , vector<int>& arr , vector<int>& temp , vector<vector<int>>& ans , int k , int sum ){

        // Base Case
        if( sum == 0 && k == 0 ){
            ans.push_back( temp );
            return;
        }

        // Base Case
        if( sum == 0 && k != 0 ){
            return;
        }

        // Base Case
        if( sum != 0 && k == 0 ){
            return;
        }

        for( int i = index ; i < arr.size() ; i++ ){
            if( arr[i] > sum ) break;
            temp.push_back( arr[i] );
            solve( i+1 , arr , temp , ans , k-1 , sum-arr[i] );
            temp.pop_back();
        }

    }

    vector<vector<int>> combinationSum3(int k, int n){

        int index = 0;
        vector<int> arr;
        vector<int> temp;
        vector<vector<int>> ans;
        for( int i = 0 ; i < 9 ; i++ ){
            arr.push_back(i+1);
        }
        solve( index , arr , temp , ans , k , n );
        return ans;

    }
    
};

*/