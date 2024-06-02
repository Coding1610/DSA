#include<bits/stdc++.h>
using namespace std;

int Divisible( int x , int a , int b ){

    int c1 = x/a;
    int c2 = x/b;
    int c3 = x/(a*b);
    int ans = (c1+c2) - c3;

}

int main(){

    int x;
    cout << "Enter x : ";
    cin >> x;

    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    int ans = Divisible( x , a , b );
    cout << "Answer is : " << ans << endl; 
} 