#include<iostream>
using namespace std;

int main(){

/*
    * * * * 
    * * * 
    * * 
    *
*/

    int n = 4;
    int i = 1;
    while( i <= n ){
        int j = 1;
        while( j <= n+1-i ){
            cout << "*" << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }

}   