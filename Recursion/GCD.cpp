#include<bits/stdc++.h>
using namespace std;

int solve( int a , int b ){

    // Base Case
    if( a == 0 ){
        return b;
    }

    if( b == 0 ){
        return a;
    }

    // Recursion Call
    if( a > b ){
        return solve( a-b , b );
    }
    else{
        return solve( a , b-a );
    }

}

int main(){

    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    cout << "GCD : " << solve( a , b );

}