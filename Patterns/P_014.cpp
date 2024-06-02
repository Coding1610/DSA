#include<iostream>
using namespace std;

int main(){

/*
    A B C D 
    E F G H 
    I J K L 
    M N O P
*/

    int n = 4;
    int i = 1;
    char ch = 'A';
    while( i <= n ){
        int j = 1;
        while( j <= n ){
            cout << ch << " ";
            ch = ch+1;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }

}   