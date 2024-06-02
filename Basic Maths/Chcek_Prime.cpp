#include<iostream>
using namespace std;

bool Check_Prime( int n ){

    if( n <= 1 ){
        return false;
    }

    for( int i = 2; i < n ; i++ ){
        
        if( n%i == 0 ){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    bool ans = Check_Prime( n );
    cout << n << " is Prime ? " << ans;

}