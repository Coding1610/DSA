#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void solve( int l , int r , vector<int>& ans , vector<int> arr ){

        if( l == r ){
            ans.push_back( arr[l] );
            return;
        }

        int ansXOR = 0;

        for( int i = l ; i <= r ; i++ ){
            ansXOR ^= arr[i];    
        }

        ans.push_back( ansXOR );
        return;

    }
    
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries){

        vector<int> ans;
        int n = queries.size();

        for( int i = 0 ; i < n ; i++ ){
            solve( queries[i][0] , queries[i][1] , ans , arr );
        }

        return ans;
        
    }
};

*/