#include<iostream>
using namespace std;

int clear_bit( int n , int i ){

    if( (n & ( 1 << i )) != 0 ){
        int ans = ( n ^ ( 1 << i ) );  // ( n & (~( 1 << i )) );
        return ans;
    }
    else{
        return n;
    }
}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    int i;
    cout << "Enter your ith bit: ";
    cin >> i;

    int ans = clear_bit( n , i );
    cout << "Answer is : " << ans;

}