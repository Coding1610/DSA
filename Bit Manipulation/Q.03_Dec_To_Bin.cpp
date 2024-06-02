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

int main(){

    int number;
    cout << "enter your decimal number : ";
    cin >> number;

    string ans = Dec_to_Bin( number );
    string binary_number = rev_string( ans );
    
    cout << "binary number is : " << binary_number;

}