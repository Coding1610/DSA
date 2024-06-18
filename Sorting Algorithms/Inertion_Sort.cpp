#include<bits/stdc++.h>
using namespace std;

/* Coding Ninjas

void insertionSort(int n, vector<int> &arr){

    for( int i = 1 ; i < n ; i++ ){

        int key = arr[i];
        int j = i-1;

        for( ; j >= 0 ; j-- ){

            if( arr[j] > key ){
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
        }
        
        arr[j+1] = key;
    }   
}

*/

void sortarray(int arr[] , int size ){

    for( int i = 1 ; i < size ; i++ ){

        int key = arr[i];
        int j = i-1;

        for( ; j >= 0 ; j-- ){

            if( arr[j] > key ){
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
        }
        
        arr[j+1] = key;
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

    sortarray(num,n);
    
    for(int i =0 ; i< n ; i++){
        cout << num[i] << " " ;
    }
    cout << endl;

    return 0;

}