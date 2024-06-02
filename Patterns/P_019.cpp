#include<iostream>
using namespace std;

int main(){

/*
    D 
    C D 
    B C D 
    A B C D
*/
    int n = 4;
    int i = 1;
    while( i <= n ){
        int j = 1;
        while( j <= i ){
            char ch = 'A'+j-i+n-1;
            cout << ch << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1; 
    }

}   