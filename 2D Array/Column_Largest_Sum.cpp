#include<bits/stdc++.h>
using namespace std;

int Column_Sum( int arr[][4] , int r , int c ){

    int maxi = -1;
    int sum = 0;

    for( int i = 0 ; i < c ; i++ ){
        for( int j = 0 ; j < r ; j++ ){
            sum += arr[j][i];
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

    cout << "Largest Column Sum Is : " << Column_Sum( arr , 3 , 4 );   
}