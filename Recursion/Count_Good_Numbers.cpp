#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:

    #define MOD 1000000007

    long long int power( long long int a , long long int b ){

        // Base Case
        if( b == 1 ){
            return a;
        }
        if( b == 0 ){
            return 1;
        }

        long long int ans = power(a,b/2);

        // Recursion Call
        if( b%2 == 0 ){
            return (ans*ans)%MOD;
        }
        else{
            return (ans*ans*a)%MOD;
        }
    }

    int countGoodNumbers(long long n) {

        long long int even;
        long long int odd;

        if( n&1 ){
            odd = n/2;
            even = (n+1)/2;
        }
        else{
            odd = n/2;
            even = n/2;
        }

        return ((power(5,even)%MOD)*(power(4,odd)%MOD))%MOD;
    }   
};
*/