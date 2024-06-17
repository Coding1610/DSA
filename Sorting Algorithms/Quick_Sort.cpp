#include<bits/stdc++.h>
using namespace std;

int partition( vector<int> &arr , int left , int right ){

    int count = 0;
    int pivot = arr[left];

    for( int i = left+1 ; i <= right ; i++ ){
      if(arr[i] <= pivot ){
        count++;
      }
    }

    int pivotIndex = count+left;
    swap( arr[pivotIndex] , arr[left] );

    int i = left;
    int j = right;

    while( i < pivotIndex && j > pivotIndex && i < j ){

        while( arr[i] <= pivot && i < pivotIndex ){
            i++;
        }

        while( arr[j] > pivot && j > pivotIndex ){
            j--;
        }

        if( i < pivotIndex && j > pivotIndex ){
            swap( arr[i] , arr[j] );
        }

    }

    return pivotIndex;

}

void solve( vector<int> &arr , int left , int right ){

    if(left >= right){
        return;
    }

    int p = partition( arr , left , right );
    
    solve( arr , left , p-1 );
    solve( arr , p+1 , right );

}
 

vector<int> quickSort(vector<int> arr){

    solve( arr , 0 , arr.size()-1 );
    return arr;

}