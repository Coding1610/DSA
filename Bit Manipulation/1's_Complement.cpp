#include<iostream>
using namespace std;

string rev_string( string s ){

    int len = s.length();

    for( int i = 0 ; i < len/2 ; i++ ){
        swap( s[i] , s[len-i-1] );
    }

    return s;
}

string Dec_to_Bin( int number ){

    string ans = "";
    while( number != 1 ){
        if( number%2 == 1 ){
            ans += '1';
        }
        else{
            ans += '0';
        }
        number = number/2;
    }
    ans+= '1';
    return ans;
}

string complement1( int num ){

    string s1 = Dec_to_Bin( num );
    string s2 = rev_string( s1 );

    int len = s2.length();

    for( int i = 0 ; i < len ; i++ ){
        if( s2[i] == '1' ){
            s2[i] = '0';
        }
        else{
            s2[i] = '1';
        }
    }
    return s2;
}

int main(){

    int number;
    cout << "enter your number : ";
    cin >> number;

    string ans = complement1( number );

    cout << "1's complement : " << ans;
}