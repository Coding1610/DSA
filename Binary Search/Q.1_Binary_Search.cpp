#include<bits/stdc++.h>
using namespace std;

int Binary_Search( int arr[] , int size , int key ){

    int s = 0;
    int e = size - 1;
    int mid = (s + ((e-s)/2));

    while( s<= e ){

        if( arr[mid] == key ){
            return mid;
        }

        if( arr[mid] > key ){
            s = mid+1;
        }

        else{
            e = mid-1;
        }

        mid = (s + ((e-s)/2));
    }
    return -1;
}

int main(){

    int num[6] = {1,2,3,4,5,6};
    int arr[5] = {90,80,70,60,50};

    int index1 = Binary_Search(num,6,3);
    int index2 = Binary_Search(arr,5,50);

    cout << "INDEX OF 3 IS : " << index1 << endl;
    cout << "INDEX OF 50 IS : " << index2 << endl;
    
}