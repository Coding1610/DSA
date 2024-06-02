#include<bits/stdc++.h>
using namespace std;

bool Armstrong_Num( int n ){

    int k = log10(n) + 1;
    int temp = n;
    int sum = 0;

    while( temp ){
        sum += pow( temp%10 , k );
        temp /= 10;
    }
    
    return ((sum == n ) ? true : false );

}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    cout << n << " is Armstrong number ? : " << Armstrong_Num( n );

}
