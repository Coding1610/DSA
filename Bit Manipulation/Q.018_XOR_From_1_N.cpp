#include<iostream>
using namespace std;

// Brute Force
int Calculate_XOR( int n ){

    int XOR = 0;
    for( int i = 1 ; i <= 4 ; i++ ){
        XOR = ( XOR ^ i);
    }
    return XOR;

}

// Optimal
int Optimal_XOR( int n ){

    if( n % 4 == 0 ){
        return n;
    }
    else if( n % 4 == 1 ){
        return 1;
    }
    else if( n % 4 == 2 ){
        return n+1;
    }
    else{ // ( n % 4 == 3 )
        return 0;
    }

}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    int ans1 = Calculate_XOR( n );
    cout << "XOR from 1 to " << n << " is : " << ans1;

    int ans2 = Optimal_XOR( n );
    cout << "XOR from 1 to " << n << " is : " << ans2;

}