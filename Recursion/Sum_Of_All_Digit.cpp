#include<bits/stdc++.h>
using namespace std;

int sum(int n){

    // Base Case
    if( n >= 0 && n <= 9 ){
        return n;
    }

    // Recursion Call
    int ans = ( n%10 ) + sum( n/10 );
    return ans;
}

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    cout << "Sum of all Digit is : " << sum(n);
}