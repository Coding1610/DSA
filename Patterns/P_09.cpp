#include<iostream>
using namespace std;

int main(){

/*
    1 
    2 3 
    4 5 6 
    7 8 9 10 
*/

    int n = 4;
    int i = 1;
    int count = 1;
    while( i <= n ){
        int j = 1;
        while( j <= i ){
            cout << count << " ";
            count += 1;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }

}   