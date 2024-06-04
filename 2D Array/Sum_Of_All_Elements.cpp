#include<bits/stdc++.h>
using namespace std;

int Sum( int arr[][3] , int r , int c ){

    int sum = 0;
    for( int i = 0 ; i < r ; i++ ){
        for( int j = 0 ; j < c ; j++ ){
            sum = sum + arr[i][j];
        }
    }
    return sum;  
}

int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0 ; i < 3; i++){
        for (int j = 0 ; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum is : " << Sum(arr , 3 , 3) << endl;
}