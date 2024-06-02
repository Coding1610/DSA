#include<bits/stdc++.h>
using namespace std;

double Power ( int a , int b ){

    double ans = 1.0;
    bool sign = false;

    if( b < 0 ){
        sign = true;
    }

    int k = abs(b);

    while( k > 0 ){

        if( k%2 == 1 ){
            ans = ans*a;
            k = k-1;
        }
        else{
            a = a*a;
            k = k/2;
        }
    }

    if( sign ){
        return 1.0/ans;
    }
    return ans;
    
}

int main(){

    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    cout << a << "^" << b << " is : " << Power(a,b);

}