#include<iostream>
using namespace std;

int remove_last_set_bit( int n ){
    return ( n & (n-1) );
}

int main(){
    
    int n;
    cout << "Enter your number : ";
    cin >> n;

    int ans = remove_last_set_bit( n );
    cout << "Answer is : " << ans;
}