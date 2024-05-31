#include<bits/stdc++.h>
using namespace std;

// 1st : Optimal
bool Perfect_Num_2( int num ){

    if( num < 0 || num == 1){
        return false;
    }

    int sum = 0;

    for( int i = 1 ; i <= sqrt(num) ; i++ ){
        if( num%i == 0 ){
            sum += i;
            if( i != num/i ){
                sum += (num/i);
                if( num/i == num ){
                    sum -= num;
                }
            }   
        }
    }

    return ( ( num == sum ) ? true : false );

}

// 2nd
bool Perfect_Num_1( int n ){

    if( n < 0 ){
        return false;
    }

    int sum = 0;

    for( int i = 1 ; i < n ; i++ ){
        if( n%i == 0 ){
            sum += i;
        }
    }

    return ( ( n == sum ) ? true : false );

}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    cout << n << " Is Perfect Number ? : " << Perfect_Num_2( n ); 

}