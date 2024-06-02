#include<iostream>
using namespace std;

int set_bit( int n , int i ){

    if( (n & ( 1 << i )) != 0 ){
        return n;
    }
    else{
        int ans = ( n ^ ( 1 << i ));
        return ans;
    }
}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    int i;
    cout << "Enter your ith bit to be convert : ";
    cin >> i;

    int ans = set_bit( n , i );
    cout << "Answer is : " << ans;
    
}