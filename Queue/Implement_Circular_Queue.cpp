#include<bits/stdc++.h>
using namespace std;

/*
class MyCircularQueue {

private:
    int* arr;
    int size;
    int f;
    int r;

public:
    MyCircularQueue(int k) {
        size = k;
        r = -1;
        f = -1;
        arr = new int[k];
    }
    
    bool enQueue(int value) {

        if( isFull() ){
            return false;
        }
        else if( f == -1 ){
            r = 0;
            f = 0;
        }
        else if( r == size-1 && f != 0 ){
            r = 0;
        }
        else{
            r++;
        }
        arr[r] = value;
        return true;
        
    }
    
    bool deQueue() {

        if( isEmpty() ){
            return false;
        }
        if( f == r ){
            f = -1;
            r = -1;
        }
        else if( f == size-1 ){
            f = 0;
        }
        else{
            f++;
        }
        return true;
        
    }
    
    int Front() {
        if( isEmpty() ){
            return -1;
        }
        else{
            return arr[f];
        }
    }
    
    int Rear() {
        if( isEmpty() ){
            return -1;
        }
        else{
            return arr[r];
        }
    }
    
    bool isEmpty() {
        if( f == -1 ){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if( (f == 0  && r == size-1) || (f == ((r+1)%size) ) ){
            return true;
        }
        else{
            return false;
        }
    }
};

*/

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */