#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> closestPrimes(int left, int right){

        vector<bool> prime(right+1,true);

        prime[0] = prime[1] = false;

        for( int i = 2 ; i*i <= right ; i++ ){
            if( prime[i] ){
                for( int j = i*i ; j <= right ; j += i ){
                    prime[j] = false;
                }
            }
        }   

        vector<int> primes;

        for( int i = left ; i <= right ; i++ ){
            if( prime[i] ){
                primes.push_back(i);
            }
        }

        if( primes.size() < 2 ){
            return {-1,-1};
        }

        if( primes.size() == 2 ){
            return primes;
        }

        int minGap = INT_MAX;
        vector<int> primePair = {-1,-1};

        for( int i = 1 ; i < primes.size(); i++ ){
            int gap = primes[i] - primes[i-1];
            if( gap < minGap ){
                minGap = gap;
                primePair = {primes[i-1], primes[i]};
            }
        }

        return primePair;
        
    }
};

*/