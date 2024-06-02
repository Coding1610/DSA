#include<iostream>
using namespace std;

// LEFT TO RIGHT SORT

void insertionsort( int arr[] , int size ){

    for( int i = 1 ; i < size ; i++ ){

        int tempvalue =  arr[i];
        int j = i-1;

        for( ; j >= 0 ; j-- ){

            if(arr[j] > tempvalue){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = tempvalue;
    }
}

int main(){

    int n; 
    cout << " ENTER  ARRAY SIZE : " ;
    cin >> n;

    int num[n];
    cout << " ENTER THE ELEMENTS : " ;
    for (int i = 0  ; i < n ; i++){
        cin >>  num[i];
    }

    insertionsort(num,n);
    for(int i =0 ; i< n ; i++){
        cout << num[i] << " " ;
    }
    cout << endl;

    return 0;

}


// RIGHT TO LEFT SORT

void insertionsort( int arr[] , int size ){

    for( int i = size-2 ; i >= 0 ; i-- ){

        int tempvalue =  arr[i];
        int j = i+1;

        for( ; j < size ; j++ ){

            if(arr[j] < tempvalue){
                arr[j-1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j - 1] = tempvalue ;
    }
}

int main(){

    int n; 
    cout << " ENTER  ARRAY SIZE : " ;
    cin >> n;

    int num[n];
    cout << " ENTER THE ELEMENTS : " ;
    for (int i = 0  ; i < n ; i++){
        cin >>  num[i];
    }

    insertionsort(num,n);
    for(int i =0 ; i< n ; i++){
        cout << num[i] << " " ;
    }
    cout << endl;

    return 0;

}