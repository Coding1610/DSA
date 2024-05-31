#include<bits/stdc++.h>
using namespace std;

// In Built Function
// return __gcd( *min_element(nums.begin() ,nums.end()), *max_element(nums.begin(),nums.end()) );

int Find_GCD( int x , int y ){

     // Base Case
    if( x == y ){
       return x;
    }
    if( x == 0 ){
        return y;
    }
    if( y == 0 ){
        return x;
    }

    // Recursion call
    if( x > y ){
        Find_GCD(x-y, y);
    }
    else{
        Find_GCD( x , y-x);
    }
}

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    int m;
    cout << "Enter m : ";
    cin >> m;

    int ans = Find_GCD( n , m );
    cout << " GCD of " << n <<" & " << m << " is : " << ans;
}