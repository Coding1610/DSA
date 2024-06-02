#include<bits/stdc++.h>
using namespace std;

/*
bool Is_Possible( vector<int>& arr , int n , int k , int mid ){

    int cow = 1;
    int lastPosition = arr[0];

    for( int i = 0 ; i < n ; i++ ){

        if( arr[i]-lasPosition >= mid ){
            cow++;

            if( cow == k ){
                return true;
            }    
            lasPosition = arr[i];
        }
    }
    return false;
}

int Aggressive_Cows( vector<int>& arr , int n , int k ){

    sort(arr.begin() , arr.end());

    int s = 0;
    int maxi = -1;

    for( int i = 0 ; i < n ; i++ ){
        maxi = max(maxi,arr[i]);
    }
    int e = maxi;

    int ans = -1;
    int mid = s+(e-s)/2;

    while( s <= e ){

        if( Is_Possible( arr , n , k , mid ) ){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n  = stalls.size();
    return Aggressive_Cows( stalls , n , k );   
}
*/