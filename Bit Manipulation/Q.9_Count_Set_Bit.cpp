#include<iostream>
using namespace std;

int count_bit( int n ){

    int count = 0;
    while( n != 0 ){
        n= (n & (n-1));
        count++;
    }
    return count;

}

int main(){

    int n;
    cout << " Enter your number : ";
    cin >> n;

    int ans = count_bit( n );
    cout << "Total set bit : " << ans;

}