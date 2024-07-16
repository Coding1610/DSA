#include<bits/stdc++.h>
using namespace std;

class Cqueue{

    private:
    int* arr;
    int size;
    int qfront;
    int qrear;

    public:

    // Constructor
    Cqueue( int s ){
        qfront = -1;
        qrear = -1;
        size = s;
        arr = new int[s];
    }

    // Push
    void push( int value ){

        if( isFull() ){
            cout << "Queue is Full." << endl;
            return;
        }

        else if( qfront == -1 ){
            qfront = qrear = 0;
            arr[qrear] = value;
        }

        else if( qrear == size-1 && qfront != 0 ){
            qrear = 0;
            arr[qrear] = value;
        }

        else{
            qrear++;
            arr[qrear] = value;
        }

        cout << "pushed => " << value << endl;

    }

    // Pop

    void pop(){

        if( isEmpty() ){
            cout << "Queue is Empty." << endl;
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
            qfront++;
        }

        cout << "poped => " << value << endl;

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

        if((qfront == 0 && qrear == size-1) || ( qfront == ((qrear+1)%size) ) ){
            return true;
        }
        else{
            return false;
        }

    }

};

int main(){

    Cqueue q(5);

    cout << endl;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.pop();
    q.push(6);
    q.push(7);
    q.push(8);
    q.front();
    q.rear();
    cout << q.isFull() << endl;
    cout << q.isEmpty() << endl;

    cout << endl;

}