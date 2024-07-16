#include<bits/stdc++.h>
using namespace std;

class Queue{

    private:

    int *arr;
    int qfront;
    int qrear;
    int size;

    public:

    // Constructor
    Queue(){
        size = 1000;
        arr = new int[size];
        qfront = -1;
        qrear = -1;
    }

    // Push
    void push( int value ){

        if( qrear == size ){
            cout << "Queue is full can't insert a value." << endl;
            return;
        }
        if( qfront == qrear == -1 ){
            qfront = qrear = 0;
        }
        arr[qrear] = value;
        qrear++;
        cout << "pushed => " << value << endl;

    }

    // Pop
    void pop(){

        if( qfront == -1 ){
            cout << "Can't pop , Queue is empty." << endl;
            return;
        }
        if( qfront == qrear ){
            qfront = qrear = -1;
        }
        int value = arr[qfront];
        qfront++;
        cout << "poped => " << value << endl;

    }

    // Empty
    bool isEmpty(){

        if( qfront == qrear ){
            return true;
        }
        else{
            return false;
        }

    }

    // Front
    void front(){

        if( qfront == qrear ){
            cout << "Empty Queue" << endl;;
            return;
        }    
        cout << "Front => " << arr[qfront] << endl;

    }

    // Rear
    void rear(){

        if( qrear == qfront ){
            cout << "Empty Queue" << endl;
            return;
        }
        cout << "Rear => " << arr[qrear-1] << endl;;

    }

};

int main(){

    Queue q;

    cout << endl;

    q.push(1);
    q.push(2);
    q.push(3);

    q.front();

    q.pop();

    q.front();
    
    cout << q.isEmpty() << endl;

    q.pop();
    q.pop();
    q.pop();

    q.push(4);
    q.push(5);
    q.push(6);

    q.rear();

    cout << endl;

}