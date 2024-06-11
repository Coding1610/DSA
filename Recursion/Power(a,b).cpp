#include<bits/stdc++.h>
using namespace std;

int Power( int a , int b ){

    // Base Case
    if( b == 0 ){
        return 1;
    }

    if( b == 1 ){
        return a;
    }

    // Recursion Call
    int ans = Power(a,b/2);
    if( b%2 == 0 ){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main(){

    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    cout << "Answer is : " << Power(a,b);
}