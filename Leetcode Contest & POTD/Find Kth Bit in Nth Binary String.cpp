#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    string invertStr( string str ){

        for( int i = 0 ; i < str.size() ; i++ ){
            if( str[i] == '0' ){
                str[i] = '1';
            }
            else{
                str[i] = '0';
            }
        }

        return str;

    }

    char findKthBit(int n, int k) {

        string str = "0";

        for( int i = 1 ; i < n ; i++ ){
            string newStr = invertStr(str);
            reverse( newStr.begin() , newStr.end() );
            str = str + '1' + newStr;
        }
        
        return str[k-1];
        
    }

};

*/