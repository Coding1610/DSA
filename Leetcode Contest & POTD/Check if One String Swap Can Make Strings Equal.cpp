#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    bool areAlmostEqual(string s1, string s2){

        int i = -1;
        int j = -1;
        int count = 0;

        for( int k = 0 ; k < s1.size() ; k++ ){
            if( s1[k] != s2[k] ){
                count++;
                if( i == -1 ) i = k;
                else if( j == -1 ) j = k;
            }
        }

        if( count == 0 ) return true;
        if( count == 2 && s1[i] == s2[j] && s1[j] == s2[i] ) return true;
        return false;

    }
};

*/