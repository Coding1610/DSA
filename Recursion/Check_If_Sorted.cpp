#include<bits/stdc++.h>
using namespace std;

bool ckeckSort( int arr[] , int n ){

    // Base Case
    if( n == 0 || n == 1 ){
        return true;
    }

    if( arr[0] > arr[1] ){
        return false;
    }

    // Recursion Call
    else{
        bool ans = ckeckSort( arr+1 , n-1 );
        return ans;
    }
}

int main(){

    int n;
    cout << "Enter Size Of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Your Elements " << endl;
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    cout << "Answer is : " << ckeckSort( arr , n );
}