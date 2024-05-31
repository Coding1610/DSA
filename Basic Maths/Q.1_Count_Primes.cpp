#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

// Sieve Of Eratosthenes
int Count_Primes( int n ){

    vector <bool> isPrime( n+1 , true );
    isPrime[0] == isPrime[1] == false;
    int count = 0;
    for( int i = 2 ; i < n ; i++ ){
        if( isPrime[i] ){
            count += 1;

            for( int j = 2*i ; j < n ; j = j+i ){
                isPrime[j] = 0;
            }
        }
    }
    return count;
}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    int ans = Count_Primes( n );
    cout << "Total number of primes : " << ans;
}