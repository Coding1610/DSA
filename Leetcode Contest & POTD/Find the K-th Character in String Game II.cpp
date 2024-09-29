#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations){

        vector<int> bits;
        k--;

        while( k > 0 ){
            bits.push_back( k%2 );
            k = k/2;
        }

        int index = 0;

        for( int i = 0 ; i < bits.size() ; i++ ){
            index += bits[i]*operations[i];
        }

        char ch = 'a'+index%26;
        return ch;
        
    }
};

*/