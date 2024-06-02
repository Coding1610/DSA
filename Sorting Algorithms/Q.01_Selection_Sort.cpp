#include<iostream>
using namespace std;

void sortarray(int arr[] , int size ){

    for(int i = 0 ; i < size - 1 ; i++){

        int minindex = i;

        for (int j = i+1 ; j < size ; j++){

            if(arr[j] < arr[minindex]){
             minindex = j ;
            }   
        }
        swap(arr[minindex] , arr[i]);
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