#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void solve( int index , vector<int>& arr , vector<int>& temp , vector<vector<int>>& ans , int n , int k ){

        // Base Case
        if( k == 0 ){
            ans.push_back(temp);
            return;
        }

        for( int i = index ; i < n ; i++ ){
            temp.push_back( arr[i] );
            solve( i+1 , arr , temp , ans , n , k-1 );
            temp.pop_back();
        }

    }

    vector<vector<int>> combine(int n, int k){

        int index = 0;
        vector<int> arr;
        vector<int> temp;
        vector<vector<int>> ans;
        for( int i = 0 ; i < n ; i++ ){
            arr.push_back(i+1);
        }        
        solve( index , arr , temp , ans , n , k );
        return ans;

    }
    
};

*/