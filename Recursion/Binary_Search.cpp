#include<bits/stdc++.h>
using namespace std;

bool BinarySearch( int arr[] , int n , int key , int s , int e ){

    int mid = s+(e-s)/2;

    // Base Case
    if( s > e ){
        return false;
    }

    if( arr[mid] == key ){
        return true;
    }

    // Left Recursion Call
    if( arr[mid] > key ){
        BinarySearch( arr , n , key , s , mid-1 );
    }

    // Right Recursion Call
    else{
        BinarySearch( arr , n , key , mid+1 , e );
    }
   
}

int main(){

    int n;
    cout << "Enter Size Of Array : ";
    cin >> n;

    int key;
    cout << "Enter Your Target : ";
    cin >> key;

    int arr[n];
    cout << "Enter Your Elements " << endl;
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    cout << "Answer is : " << BinarySearch( arr , n , key , 0 , n-1 );
}