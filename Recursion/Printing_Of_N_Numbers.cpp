#include<bits/stdc++.h>
using namespace std;

int print( int n ){

    // Base Case
    if( n == 0 ){
        return 0;
    }
    cout << n << " ";

    // Recursion Call
    print(n-1);
    
}
int main(){

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    print(n);
}