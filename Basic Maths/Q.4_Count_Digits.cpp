#include<bits/stdc++.h>
using namespace std;

int Count_Digit( int n ){

    // 1st 
    // string str = to_string(n);
    // int digits = str.length();
    // return digits;

    // 2nd
    return ( log10(n) + 1 );

}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;
    
    int ans = Count_Digit( n );
    cout << "Total Digits in " << n << " : " << ans;
}