#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3][4];

    cout << "Enter Your Elements" << endl;

    for( int i = 0 ; i < 4 ; i++ ){
        for( int j = 0 ; j < 3 ; j++ ){
            cin >> arr[j][i];
        }
    }

    cout << endl;

    cout << "[ ";

    for( int i = 0 ; i < 3 ; i++ ){
        cout << "[";
        for( int j = 0 ; j < 4 ; j++ ){
            cout << arr[i][j] << ",";
        }
        cout << "], ";
    }
    cout << "]";

}