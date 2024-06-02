#include<iostream>
using namespace std;

int main(){

/*
    A B C D 
    A B C D 
    A B C D 
    A B C D 
*/

    int n = 4;
    int i = 1;
    while( i <= n ){
        int j = 1;
        while( j <= n ){
            char ch = 'A'+j-1;
            cout << ch << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }

}   