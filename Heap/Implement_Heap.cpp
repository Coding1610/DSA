#include<bits/stdc++.h>
using namespace std;

class Heap{

    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    // Insertion
    void heapInsertion( int value ){

        size += 1;
        int index = size;
        arr[index] = value;

        while( index > 1 ){

            int parent = index/2;

            if( arr[parent] < arr[index] ){
                swap( arr[parent] , arr[index] );
                index = parent;
            }

            else{
                return;
            }

        }

    }

    // Heapify
    void heapify( int arr[] , int n , int i ){

        int largest = i;
        int l = 2*i;
        int r = 2*i+1;     

        if( l < n && arr[l] > arr[largest] ){
            largest = l;
        }
        
        if( r < n && arr[r] > arr[largest] ){
            largest = r;
        }
    
        if( largest != i ){
            swap( arr[i] , arr[largest] );
            heapify( arr , n , largest );
        }

    }

    // Deletion
    void heapDeletion(){

        if( size == 0 ){
            cout << "Heap is empty" << endl;
            return;
        }

        swap( arr[1] , arr[size] );
        size -= 1;

        heapify( arr , size , 1 );

    }

    // Display
    void display(){

        for( int i = 1 ; i <= size ; i++ ){
            cout << arr[i] << " ";
        }
        cout << endl;

    }

    // Heasort
    void heapsort( int arr[] , int n , int i ){

        int size = n;

        while( size > 1 ){
            swap( arr[i] , arr[size] );
            size -= 1;
            heapify( arr , size , 1 );
        }

    }

};

int main(){

    Heap h;
    h.heapInsertion(11);
    h.heapInsertion(96);
    h.heapInsertion(23);
    h.heapInsertion(43);
    h.heapInsertion(76);
    h.heapInsertion(46);
    h.heapInsertion(55);

    h.display();

    h.heapDeletion();

    h.display();

    int nums[7] = {-1,6,4,5,1,3,2};
    h.heapsort( nums , 6 , 1 );

    for( int i = 1 ; i <= 6 ; i++ ){
        cout << nums[i] << " ";
    }

    cout << endl;

}