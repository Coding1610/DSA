#include<iostream>
using namespace std;

bool solve_using_left( int n , int i ){

    if( (n & ( 1 << i )) != 0 ){
        return true;
    }
    else{
        return false;
    }

}

bool solve_using_right( int n , int i ){
    
    if( (( n >> i ) & 1) != 0 ){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    int n;
    cout << "Enter your number : ";
    cin >> n;

    int i;
    cout << "Enter your ith bit: ";
    cin >> i;

    bool ans = solve_using_right( n , i );
    cout << "Answer is : " << ans;
}