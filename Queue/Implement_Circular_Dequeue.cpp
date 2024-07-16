#include<bits/stdc++.h>
using namespace std;

/*

class MyCircularDeque {
    int* arr;
    int qfront;
    int qrear;
    int size;

public:
    MyCircularDeque(int k) {
        size = k;
        qfront = -1;
        qrear = -1;
        arr = new int[k];
    }
    
    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }
        if (qfront == -1) {
            qfront = 0;
            qrear = 0;
        } else if (qfront == 0) {
            qfront = size - 1;
        } else {
            qfront -= 1;
        }
        arr[qfront] = value;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }
        if (qfront == -1) {
            qfront = 0;
            qrear = 0;
        } else if (qrear == size - 1) {
            qrear = 0;
        } else {
            qrear += 1;
        }
        arr[qrear] = value;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }
        if (qfront == qrear) {
            qfront = qrear = -1;
        } else if (qfront == size - 1) {
            qfront = 0;
        } else {
            qfront += 1;
        }
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }
        if (qfront == qrear) {
            qfront = qrear = -1;
        } else if (qrear == 0) {
            qrear = size - 1;
        } else {
            qrear -= 1;
        }
        return true;
    }
    
    int getFront() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[qfront];
        }
    }
    
    int getRear() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[qrear];
        }
    }
    
    bool isEmpty() {
        return qfront == -1;
    }
    
    bool isFull() {
        return (qfront == 0 && qrear == size - 1) || (qfront == qrear + 1);
    }
};

*/

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */