#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    string decToBin( int num ) {

        if( num == 0 ) return "0";

        string binary = "";

        while( num > 0 ){
            binary = (num % 2 == 0 ? "0" : "1") + binary;
            num /= 2;
        }

        return binary;

    }

    static bool compare( string &a , string &b ){
        return a + b > b + a;
    }

    int maxGoodNumber(vector<int>& nums){

        vector<string> bins;

        for( int num : nums ){
            bins.push_back( decToBin(num) );
        }

        sort( bins.begin(), bins.end(), compare );

        string maxBinary = "";

        for( string bin : bins ){
            maxBinary += bin;
        }

        int base = 1; 
        int maxDecimal = 0;

        for( int i = maxBinary.size()-1 ; i >= 0 ; i-- ){
            if( maxBinary[i] == '1' ){
                maxDecimal += base;
            }
            base *= 2;
        }

        return maxDecimal;
        
    }

};

*/