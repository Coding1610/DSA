#include<bits/stdc++.h>
using namespace std;

int Row_Sum( int arr[][4] , int r , int c ){

    int maxi = -1;
    int sum = 0;

    for( int i = 0 ; i < r ; i++ ){
        for( int j = 0 ; j < c ; j++ ){
            sum += arr[i][j];
        }
        if( maxi < sum ){
            maxi = sum;
            sum = 0;
        }
    }
    return maxi;
}

int main(){

    int arr[3][4] = {{1,2,3,4},{4,5,6,7},{2,4,3,6}};

    cout << "Largest Row Sum Is : " << Row_Sum( arr , 3 , 4 );   
}