#include<iostream>
using namespace std;

// Brute Force
int Calculate_XOR( int n , int m ){

    int XOR = 0;
    for( int i = n ; i <= m ; i++ ){
        XOR = ( XOR ^ i);
    }
    return XOR;

}

int Optimal_XOR1( int n ){

    if( n % 4 == 0 ){
        return n;
    }
    else if( n % 4 == 1 ){
        return 1;
    }
    else if( n % 4 == 2 ){
        return n+1;
    }
    else{ // ( n % 4 == 3 )
        return 0;
    }

}

// Optimal
int Optimal_XOR2( int n , int m ){

    return (Optimal_XOR1( n-1 ) ^ Optimal_XOR1( m ));

}


int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    int m;
    cout << "Enter m : ";
    cin >> m;

    // int ans1 = Calculate_XOR( n , m  );
    // cout << "XOR from " << n << " to " << m << " is : " << ans1;

    int ans2 = Optimal_XOR2( n , m  );
    cout << "XOR from " << n << " to " << m << " is : " << ans2;

}