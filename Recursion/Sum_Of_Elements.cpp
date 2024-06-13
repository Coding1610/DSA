#include<bits/stdc++.h>
using namespace std;

int solve( int arr[] , int n , int sum , int index ){

    if( index >= n ){
        return sum;
    }

    sum += arr[index];

    solve( arr , n , sum , index+1 );
}

int main(){

    int n;
    cout << "Enter Your Array Size : ";
    cin >> n;

    int sum = 0;
    int index = 0;

    int arr[n];
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    cout << "Total Sum : " << solve( arr , n , sum , index );
}