#include<iostream>
using namespace std;

int main(){

/*
    A A A A 
    B B B B 
    C C C C     
    D D D D
*/

    int n = 4;
    int i = 1;
    char ch = 'A';
    while( i <= n ){
        int j = 1;
        while( j <= n ){
            cout << ch << " ";
            j = j+1;
        }
        cout << endl;
        ch = ch+1;
        i = i+1;
    }

}   