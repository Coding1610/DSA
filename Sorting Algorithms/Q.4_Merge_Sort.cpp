#include<iostream>
using namespace std;

void Merge( int* arr , int s , int e ){

    // Find Mid
    int mid = s+(e-s)/2;

    // Size Of Two Arrays 
    int len1 = mid+1-s;
    int len2 = e-mid;

    // Make Two Arrays
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // Put Elements Into It
    int arrIndex = s;
    for( int i = 0 ; i < len1 ; i++ ){
        arr1[i] = arr[arrIndex++];
    }

    arrIndex = mid+1;
    for( int i = 0 ; i < len2 ; i++ ){
        arr2[i] = arr[arrIndex++];
    }

    // Now Merge Them
    int index1 = 0;
    int index2 = 0;
    arrIndex = s;

    while( index1 < len1 && index2 < len2 ){

        if( arr1[index1] < arr2[index2] ){
            arr[arrIndex++] = arr1[index1++];
        }

        else{
            arr[arrIndex++] = arr2[index2++];
        }
    }

    while( index1 < len1 ){
        arr[arrIndex++] = arr1[index1++];
    }

    while( index2 < len2 ){
        arr[arrIndex++] = arr2[index2++];
    }

    delete[]arr1;
    delete[]arr2;
}

void MergeSort( int* arr , int s , int e ){

    // Base Case
    if( s >= e ){
        return;
    }

    // Find Mid
    int mid = s+(e-s)/2;

    // Recursion Call For Left
    MergeSort( arr , s , mid );

    // Recursion Call or Right
    MergeSort( arr , mid+1 , e );

    // Merge Two Sorted Array
    Merge( arr , s , e );

}

int main(){

    int n;
    cout << " Enter Size Of An Array : " ;
    cin >> n;

    int arr[n];
    cout << " Enter Elements Of An Array : ";
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    MergeSort( arr , 0 , n-1 );

    cout << " Sorted Array : "; 

    for( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;

}

// INVERSION COUNT :
    
int inversioncount(int arr[] , int n ){

    int count = 0 ; 
    for( int i = 0 ; i < n-1 ; i++){
        for( int j = i+1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                count++;
            }                    
        }
    }
    return count;
}

int main(){

    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int ans = inversioncount( arr , 10 );
    cout << " COUNT IS : " << ans << endl; 
}