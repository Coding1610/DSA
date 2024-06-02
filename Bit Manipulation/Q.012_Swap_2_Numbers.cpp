#include<iostream>
using namespace std;

void swap_2_num( int& a , int& b ){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    cout << "a : " << a << " & " << "b : " << b << endl;

    swap_2_num( a , b );

    cout << "a : " << a << " & " << "b : " << b << endl; 
}