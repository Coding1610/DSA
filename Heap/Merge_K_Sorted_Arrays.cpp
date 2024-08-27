#include<bits/stdc++.h>
using namespace std;

/*

vector<int> merger( vector<int> a , vector<int> b ){

    vector<int> ans;
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;

    while(i < n && j < m){

        if( a[i] < b[j] ){
            ans.push_back( a[i++] );
        }
        else{
            ans.push_back( b[j++] );
        }

    }

    while( i < n ){
        ans.push_back( a[i++] );
    }

    while( j < m ){
        ans.push_back( b[j++] );
    }
    
    return ans;
    
}

vector<int> mergeKSortedArrays( vector<vector<int>>&kArrays , int k ){
    
    vector<int> ans;
    
    for(int i = 0; i < k; i++){
        ans = merger(ans, kArrays[i]);
    }

    return ans;

}

*/