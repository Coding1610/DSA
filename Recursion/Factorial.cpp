#include<bits/stdc++.h>
using namespace std;


int Factorial( int n ){

    if( n == 0 ){
        return 1;
    }

    if( n == 1 ){
        return 1;
    }

    return n*Factorial(n-1);
}

int main() {
    
    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    if( n < 0 ){
        cout << "Error" << endl;
    }

    else{
        int ans = Factorial(n);
        cout << ans << endl;
    }

    return 0;
}
