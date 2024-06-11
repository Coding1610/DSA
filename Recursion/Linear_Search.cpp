#include<bits/stdc++.h>
using namespace std;

bool linearSearch( int arr[] , int n , int key ){

    // Base Case
    if( n == 0 ){
        return false;
    }

    if( arr[0] == key ){
        return true;
    }

    // Recursion Call
    else{
        bool ans = linearSearch( arr+1 , n-1 , key );
        return ans;
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

    cout << "Answer is : " << linearSearch( arr , n , key );
}