#include<iostream>
using namespace std;

int main(){

/*
    1 
    2 1 
    3 2 1 
    4 3 2 1
*/
    int n = 4;
    int i = 1;
    while( i <= n ){
        int j = 1;
        while( j <= i ){
            cout << i-j+1 << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }

}   