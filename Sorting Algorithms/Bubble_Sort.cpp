#include<bits/stdc++.h>
using namespace std;

/* Coding Ninjas

void bubbleSort(vector<int>& arr, int n){
       
    for( int i = 0 ; i < n-1 ; i++ ){
        for( int j = i ; j < n ; j++ ){
            if( arr[i] > arr[j] ){
                swap(arr[i],arr[j]);
            }
        }
    }
}

*/

void bubbleSort(int arr[ ], int n){   
    
    for( int i = 1 ; i < n ; i++ ){
    
        bool swapped = false;
        
        for( int j = 0 ; j < n-i ; j++ ){
            if( arr[j] > arr[j+1] ){
                swap( arr[j] , arr[j+1] );
                swapped = true;
            }
        }
        if(swapped == false) {
            break;
        } 
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

    bubbleSort(num,n);
    for(int i =0 ; i< n ; i++){
        cout << num[i] << " " ;
    }
    cout << endl;

    return 0;
}