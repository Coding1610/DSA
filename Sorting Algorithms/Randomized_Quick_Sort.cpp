#include<iostream>
#include<cstdlib>
using namespace std;

    int partition( int arr[], int s, int e) {

        int randomized = s + rand() % ( e- s + 1 );
        swap( arr[randomized] , arr[s]);
        int pivot = arr[s];

        int cnt = 0;
        for(int i = s+1; i<=e; i++) {
            if(arr[i] <=pivot) {
                cnt++;
            }
        }

    //place pivot at right position

        int pivotIndex = s + cnt;
        swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
        int i = s, j = e;

        while(i < pivotIndex && j > pivotIndex) {

            while(arr[i] <= pivot) 
            {
                i++;
            }

            while(arr[j] > pivot) {
                j--;
            }

            if(i < pivotIndex && j > pivotIndex) {
                swap(arr[i++], arr[j--]);
            }

        }

        return pivotIndex;

    }

    int quickSort(int arr[], int s, int e , int k ) {

    //base case
        if(s >= e) 
            return -1;

    //partitioon karenfe
        int p = partition(arr, s, e);

        if( p+1 == k ){
            return arr[p];
        }

    //left part sort karo
        else if( p+1 > k ){
            quickSort(arr, s, p-1, k );
        }

    //right wala part sort karo
        else{
            quickSort(arr, p+1, e, k );

        }
    }

    int kth( int arr[] , int n , int k ){

        if( k > n ){
            return -1;
        }

        quickSort(arr, 0, n-1 , k );

    }

    int main() {

        int arr[10] = {2,4,1,6,9,9,9,9,9,9};
        int n = 10;

        cout << " Kth smallest element is : " << kth( arr , n , 3 );

        return 0;
    }