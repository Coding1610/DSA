#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    string dec2bin( int n ){

        string s = "";
        while( n > 0 ){
            int rem = n%2;
            n = n/2;
            s += to_string(rem);
        }
        reverse(s.begin(),s.end());
        return s;

    }

    string convertDateToBinary(string date) {
        
        int Y = stoi(date.substr(0,4));
        int M = stoi(date.substr(5,6));
        int D = stoi(date.substr(8,9));

        string YS = dec2bin(Y);
        string MS = dec2bin(M);
        string DS = dec2bin(D);

        string binDate = "";
        binDate += YS;
        binDate.push_back('-');
        binDate += MS;
        binDate.push_back('-');
        binDate += DS;

        return binDate;
        
    }
};

*/