#include<bits/stdc++.h>
using namespace std;

/*
int Find_Pivot( vector<int>& arr , int n ){

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while( s < e ){

        if( arr[mid] >= arr[0] ){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int Binary_Search( vector<int>& arr , int n , int s , int e , int k ){

    int mid = s+(e-s)/2;

    while( s < e ){

        if( arr[mid] == k ){
            return mid;
        }
        else if( arr[mid] < k ){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}

int search(vector<int>& arr, int n, int k){

    int index = Find_Pivot( arr , n );
    int ans = -1;

    if( k >= arr[index] && k <= arr[n-1] ){
        ans = Binary_Search( arr , n , index , n , k );
    }

    else{
        ans = Binary_Search( arr , index , 0 , index-1 , k );
    }

    if( arr[ans] != k ){
        return -1;
    }
    
    else{
        return ans;
    }
}
*/