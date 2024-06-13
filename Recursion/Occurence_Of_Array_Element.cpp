#include<bits/stdc++.h>
using namespace std;

int first( int arr[] , int index , int n , int key ){

    // Base Case
    if( index == n ){
        return -1;
    }

    if( arr[index] == key ){
        return index;
    }

    // Recursion Call
    first( arr , index+1 , n , key );
}

int last( int arr[] , int index , int n , int key ){

    // Base Case
    if( index == -1 ){
        return -1;
    }

    if( arr[index] == key ){
        return index;
    }

    // Recursion Call
    last( arr , index-1 , n , key );
}

int main(){

    int arr[6] = {2,3,3,3,3,4};

    cout << "First : " << first( arr , 0 , 6 , 3 ) << endl;
    cout << "Last : " << last( arr , 5 , 6 , 3 ) << endl;
}
