#include<iostream>
using namespace std;

int Bin_to_Dec( string n ){

    int num = 0;
    int p2 = 1;
    int len = n.length();
    for( int i = len-1 ; i >= 0 ; i-- ){
        if( n[i] == '1' ){
            num += p2;
        }
        p2 = p2*2;
    }
    return num;

}

int main(){

    string number;
    cout << "enter your binary number : ";
    cin >> number;

    int ans = Bin_to_Dec( number );

    cout << "decimal number is : " << ans; 
}