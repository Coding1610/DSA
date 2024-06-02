#include<iostream>
using namespace std;

int toggle_bit( int n , int i ){
    return ( n ^ ( 1 << i ) );
}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    int i;
    cout << "Enter your ith bit: ";
    cin >> i;

    int ans = toggle_bit( n , i );
    cout << "Answer is : " << ans;

}