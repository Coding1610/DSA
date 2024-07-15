#include<bits/stdc++.h>
using namespace std;

class IPQueue{

    private:

    int* arr;
    int size;
    int qfront;
    int qrear;

    public:

    // Constructor
    IPQueue(){
        size = 1000;
        arr = new int[size];
        qfront = -1;
        qrear = -1;
    }

    // Push
    void push( int value ){

        if( qrear == size ){
            cout << "Can't Insert , Queue is full." << endl;
            return;
        }  
        if( qfront == qrear == -1 ){
            qfront = qrear = 0;
        } 
        arr[qrear] = value;
        qrear++;
        cout << "pushed => " << value << endl;

    }

    // Pop - Front
    void Fpop(){

        if( qfront == qrear ){
            cout << "Can't Delete , Queue is empty." << endl;
            qfront = qrear = -1; 
            return;
        }
        int value = arr[qfront];
        qfront++;
        cout << "poped Front => " << value << endl; 

    }

    // Pop - Rear
    void Rpop(){

        if( qrear < qfront || qrear == qfront ){
            cout << "Can't Delete , Queue is empty." << endl;
            qrear = qfront = -1;
            return;
        }
        int value = arr[qrear-1];
        qrear--;
        cout << "poped Rear => " << value << endl;

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

    IPQueue q;

    cout << endl;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.Fpop();
    q.Fpop();

    q.Rpop();
    q.Rpop();
    q.Rpop();

    q.Fpop();
    q.Rpop();

    q.front();
    q.rear();

    cout << q.isEmpty() << endl;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.front();
    q.rear();

    cout << q.isEmpty() << endl;

    cout << endl;

}