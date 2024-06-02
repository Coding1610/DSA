#include<iostream>
using namespace std;

void Counting_Sort( int arrA[] , int n , int k ){

    int arrB[n];
    int arrC[k];

    for( int i = 0 ; i < k ; i++ ){
        arrC[i] = 0;
    }

    for( int i = 0 ; i < n ; i++ ){
        arrC[arrA[i]] = arrC[arrA[i]] + 1;
    }

    for( int i = 1 ; i <= k ; i++){
        arrC[i] = arrC[i] + arrC[i-1];
    }

    for( int i = 0 ; i < n ; i++ ){
        arrB[arrC[arrA[i]]] = arrA[i];
        arrC[arrA[i]] = arrC[arrA[i]] - 1;
    }

    for( int i = 1 ; i < n ; i++ ){
        cout << arrB[i] << " ";
    }
    cout << endl;

}

int main(){

    int arr[] = { 8 , 4 , 7 , 2 , 2 , 1 , 6 , 5 , 4 , 3 , 9 , 1 , 0};
    int n = 13;
    int k = 9;

    Counting_Sort( arr , n+1 , k+1 );
    return 0;

}