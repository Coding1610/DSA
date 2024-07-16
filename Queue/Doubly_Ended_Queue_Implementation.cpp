#include<bits/stdc++.h>
using namespace std;

class DQueue{

    private:

    int* arr;
    int qfront;
    int qrear;
    int size;

    public:

    // Constructor
    DQueue( int s ){
        size = s;
        qfront = -1;
        qrear = -1;
        arr = new int[s];
    }

    // Push Front
    void pushFront( int value ){

        if( isFull() ){
            cout << "Can't Insert, Queue is Full." << endl;
            return;
        }
        if( qfront == -1 ){
            qfront = 0;
            qrear = 0;
        }
        else if( qfront == 0 ){
            qfront = size-1;
        }
        else{
            qfront -= 1;
        }
        arr[qfront] = value;
        cout << "pushedFront => " << value << endl;

    }

    // Push Rear
    void pushRear( int value ){

        if( isFull() ){
            cout << "Can't Insert, Queue is Full." << endl;
            return;
        }
        if( qfront == -1 ){
            qfront = 0;
            qrear = 0;
        }
        else if( qrear == size-1 ){
            qrear =0;
        }
        else{
            qrear += 1;
        }
        arr[qrear] = value;
        cout << "pushedRear => " << value << endl;

    }

    // Pop Front
    void popFront(){

        if( isEmpty() ){
            cout << "Can't Delete, Queue is Empty." << endl;
            return;
        }

        int value = arr[qfront];
        arr[qfront] = -1;

        if( qfront == qrear ){
            qfront = qrear = -1;
        }
        else if( qfront == size-1 ){
            qfront = 0;
        }
        else{
            qfront += 1;
        }
        cout << "popedFront => " << value << endl;

    }

    // Pop Rear
    void popRear(){

        if( isEmpty() ){
            cout << "Can't Delete, Queue is Empty." << endl;
            return;
        }

        int value = arr[qrear];
        arr[qrear] = -1;

        if( qfront == qrear ){
            qfront = qrear = -1;
        }
        else if( qrear == 0 ){
            qrear = size-1;
        }
        else{
            qrear -= 1;
        }
        cout << "popedRear => " << value << endl;

    }

    // Front
    void front(){

        if( isEmpty() ){
            cout << "Can't fetch front, Queue is Empty." << endl;
            return;
        }
        else{
            cout << "front => " << arr[qfront] << endl;
        }

    }

    // Rear
    void rear(){

        if( isEmpty() ){
            cout << "Can't fetch rear, Queue is Empty." << endl;
            return;
        }
        else{
            cout << "rear => " << arr[qrear] << endl;
        }

    }

    // Empty
    bool isEmpty(){

        if( qfront == -1 ){
            return true;
        }
        else{
            return false;
        }

    }

    // Full
    bool isFull(){

        if( ( qfront == 0 && qrear == size-1 ) || ( qfront == qrear+1 ) ){
            return true;
        }
        else{
            return false;
        }

    }

};

int main(){

    DQueue q(5);

    q.pushFront(1);
    q.pushFront(2);
    q.pushRear(3);
    q.pushRear(4);
    q.pushFront(5);

    q.pushFront(7);
    q.pushRear(6);

    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;

    q.front();
    q.rear();

    q.popFront();
    q.popFront();
    q.popRear();
    q.popRear();
    q.popFront();
    q.popFront();

    q.front();
    q.rear();

    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;

}