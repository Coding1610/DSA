#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int solve( int k , vector<int> arr , int index ){

        if( arr.size() == 1 ){
            return arr[0];
        }

        if( index == arr.size() ){
            index = 0;
        }

        index = (index+k)%arr.size();
        arr.erase(arr.begin()+index);

        return solve( k , arr , index );

    }

    int findTheWinner(int n, int k){

        vector<int> arr(n);

        for( int i = 0 ; i < n ; i++ ){
            arr[i] = i+1;
        }

        int ans = solve( k-1 , arr , 0 );
        
        return ans;
    }
};

*/