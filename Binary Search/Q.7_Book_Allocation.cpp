#include<bits/stdc++.h>
using namespace std;

/*
bool Is_Possible( vector<int>&arr , int n , int m , int mid )
{
    int student = 1;
    int pagesum = 0;

    for( int i = 0 ; i < n ; i++ ){

        if( pagesum + arr[i] <= mid ){
            pagesum += arr[i];
        }
        else{
            student++;
            if (student > m || arr[i] > mid) {
              return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int Book_Allocation( vector<int>& arr , int n , int m ){

    // Base Case
    if( m > n ){
        return -1;
    }

    int s = 0;
    int e = 0;

    for( int i = 0 ; i < n ; i++ ){
        e += arr[i];
    }

    int ans = -1;
    int mid = s+(e-s)/2;

    while( s <= e ){

        if( Is_Possible( arr , n , m , mid )){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int findPages(vector<int>& arr, int n, int m) {
    return Binary_Search( arr , n , m);
}
*/