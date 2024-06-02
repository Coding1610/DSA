#include<iostream>
using namespace std;

bool check_pow( int n ){

    if( n == 1 ){
        return true;
    }
    else if( (n & 1) == 0 ){ // (n & (n-1)) == 0
        return true;
    }
    else{
        return false;
    }
   
}

int main(){

    int n ;
    cout << "Enter your number : ";
    cin >> n;

    bool ans = check_pow( n );
    cout << n << " is Power of 2 ? : " << ans;

}