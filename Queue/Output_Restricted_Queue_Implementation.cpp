#include<bits/stdc++.h>
using namespace std;
 
#define MAX 100

class OPQueue {

    private:

    int arr[MAX];
    int front;
    int rear;
    int size;
 
    public:

    // Constructor
    OPQueue(int size){
        front = -1;
        rear = 0;
        this -> size = size;
    }

    // Full
    bool isFull(){
        return ((front == 0 && rear == size - 1) || front == rear + 1 );
    } 

    // Empty
    bool isEmpty(){
        return (front == -1); 
    }

    // Push - Front
    void Fpush( int value ){

        if( isFull() ){
            cout << "Overflow" << endl;
            return;
        }
        if( front == -1 ){
            front = 0;
            rear = 0;
        }
        else if( front == 0 ){
            front = size - 1;
        }
        else{
            front = front-1;
        }
        arr[front] = value;
        cout << "push Front => " << value << endl;

    }

    // Push - Rear
    void Rpush( int value ){

        if( isFull() ){
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else if( rear == size - 1 ){
            rear = 0;
        }
        else{
            rear = rear + 1;
        }
        arr[rear] = value;
        cout << "push Rear => " << value << endl;

    }

    // Pop
    void pop(){

        if( isEmpty() ){
            cout << "Queue Underflow" << endl;
            return;
        }
 
       if( front == rear ){
            front = -1;
            rear = -1;
        }
        else if( front == size - 1 ){
            front = 0;
        }
        else{
            int value = arr[front];
            front++;
            cout << "poped => " << value << endl;
        }

    }

    // Front 
    void frontValue(){

        if( isEmpty() ){
            cout << "Underflow" << endl;
            return;
        }
        cout << "front => " << arr[front] << endl;

    }

    // Rear
    void rearValue(){

        if( isEmpty() || rear < 0 ){
            cout << "Underflow" << endl;
            return;
        }
        cout << "rear => "  << arr[rear] << endl;

    }

};  

int main(){

    OPQueue q(5);

    q.Rpush(10);
    q.Rpush(15);
    q.Fpush(5);

    q.rearValue();
 
    q.frontValue();
 
    q.pop();
 
    q.frontValue();

}