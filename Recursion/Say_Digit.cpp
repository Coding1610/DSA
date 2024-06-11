#include<bits/stdc++.h>
using namespace std;

void sayDigit( int n , string arr[] ){

    // Base Case
    if( n == 0 ){
        return;
    }

    int digit = n%10;
    n = n/10;

    // Recursion Call
    sayDigit(n,arr);
    
    cout << arr[digit] << " ";

}

int main(){

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    string arr[11] = {"Zero" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" , "Ten"};
    sayDigit( n , arr );

}