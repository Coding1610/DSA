#include<bits/stdc++.h>
using namespace std;

/*

void heapify( vector<int>& arr , int n , int i ){

    int l = i;
    int lc = 2*i+1;
    int rc = 2*i+2;

    if( lc < n && arr[lc] > arr[l] ){
        l = lc;
    }

    if( rc < n && arr[rc] > arr[l] ){
        l = rc;
    }

    if( l != i ){
        swap( arr[i] , arr[l] );
        heapify( arr , n , l );
    }
    
}

vector<int> mergeHeap(int n, int m, vector<int> &arr1, vector<int> &arr2) {
    
    for( int i = 0 ; i < m ; i++ ){
        arr1.push_back( arr2[i] );
    }

    int size = n+m;

    for( int i = size/2-1 ; i >= 0 ; i-- ){
        heapify( arr1 , size , i );
    }

    return arr1;

}

*/