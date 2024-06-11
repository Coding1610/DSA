#include<bits/stdc++.h>
using namespace std;

int Power( int n ){

    // Base Case
    if( n == 0 ){
        return 1;
    }

    if( n == 1 ){
        return 2;
    }

    // Recursion Call
    return 2*Power(n-1);

}

int main(){

    int power;
    cout << "Enter Your Power : ";
    cin >> power;

    cout << "Answer is : " << Power(power);

}