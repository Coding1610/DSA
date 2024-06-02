#include<iostream>
using namespace std;

int Minimum_bits( int n , int m ){

    int count = 0 ;
    int ans = (n ^ m);
    while( ans != 0 ){
        ans = (ans & (ans-1));
        count++;
    }
    return count;
}

int main(){

    int n;
    cout << "Enter your start number : ";
    cin >> n;

    int m;
    cout << "Enter your goal number : ";
    cin >> m;

    int ans = Minimum_bits( n , m );
    cout << "Minimum " << ans << " bits flips required"; 
}