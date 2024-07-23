#include<bits/stdc++.h>
using namespace std;

/*

class NQueue{

public:

    int *arr;
    int *front;
    int *rear;
    int *next;
    int free;
    int index;

    NQueue(int n, int s){

        arr = new int[s];
        next = new int[s];
        rear = new int[n];
        front = new int[n];
        free=0;

        for( int i=0 ; i < n ; i++ ){
            rear[i] = -1;
            front[i] = -1;
        }

        for( int i = 0 ; i < s ; i++ ){

            if (i == s - 1) {
                next[i] = -1;
            } 
            else {
                next[i] = i + 1;
            }
        }

    }

    bool enqueue(int x, int m){

        if(free == -1) {
            return false;
        } 

        else{

            index = free;

            free = next[index];

            if( front[m-1] == -1 ){
                front[m-1] = index;
            }
            else{
                next[rear[m-1]] = index;
            }

            rear[m-1]=index;

            next[index]=-1;

            arr[index]=x;

            return true;

        }
    }

    int dequeue(int m) {

        if (front[m - 1] == -1) {
            return -1;
        }

        else{

            index = front[m-1];

            front[m-1] = next[index];

            next[index] = free;

            free = index;

            int temp = arr[index];

            return temp;
            
        }
    }

};

*/