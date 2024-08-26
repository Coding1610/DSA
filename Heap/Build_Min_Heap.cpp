#include<bits/stdc++.h>
using namespace std;

/*

void heapify( vector<int>& arr , int n , int i ){

	int l = i;
	int lc = 2*i+1;
	int rc = 2*i+2;

	if( lc < n && arr[lc] < arr[l] ){
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

vector<int> buildMinHeap(vector<int> arr, int n){	

	for( int i = n/2-1 ; i >= 0 ; i-- ){
		heapify( arr , n , i );
	}

	return arr;

}

*/