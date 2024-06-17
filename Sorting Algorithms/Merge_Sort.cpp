#include<bits/stdc++.h>
using namespace std;

void merge( vector<int>& nums , int s , int e ){

    int mid = s+(e-s)/2;

    int len1 = mid+1-s;
    int len2 = e-mid;

    int arr1[len1];
    int arr2[len2];

    int mainindex = s;

    for( int i = 0 ; i < len1 ; i++ ){
        arr1[i] = nums[mainindex++];
    }

    for( int i = 0 ; i < len2 ; i++ ){
        arr2[i] = nums[mainindex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainindex = s;

    while( index1 < len1 && index2 < len2 ){

        if( arr1[index1] < arr2[index2] ){
            nums[mainindex++] = arr1[index1++];
        }
        else{
            nums[mainindex++] = arr2[index2++];
        }
    }

    while( index1 < len1 ){
        nums[mainindex++] = arr1[index1++];
    }

    while( index2 < len2 ){
        nums[mainindex++] = arr2[index2++];
    }

}


void solve( vector<int>& arr , int s , int e ){

    if( s >= e ){
        return;
    }   

    int mid = s+(e-s)/2;

    solve( arr , s , mid );
    solve( arr , mid+1 , e );
    
    merge( arr , s , e );

}

void mergeSort(vector < int > & arr, int n) {
    
    solve( arr , 0 , n-1 );

}