#include<iostream>
using namespace std;

void bubbleSort(int arr[ ], int n){   
    
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
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