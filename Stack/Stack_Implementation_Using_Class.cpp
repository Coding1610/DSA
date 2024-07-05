#include<bits/stdc++.h>
using namespace std;

class Stack{

    // Properties
    public:

    int *arr;
    int top;
    int size;

    // Constructor
    Stack( int size ){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    // Push
    void push( int value ){

        if( top >= size ){
            cout << "Stack Is Overflow !!" << endl;
            return;
        }

        else{
            top++;
            arr[top] = value;
            cout << "pushed => " << value << endl;
        }

    }

    // Pop
    void pop(){

        if( top <= 0 ){
            cout << "Stack Is Empty !!" << endl;
            return;
        }

        else{
            int value = arr[top];
            top--;
            cout << "poped => " << value << endl; 
        }

    }

    // Peak
    void peak(){

        if( top <= 0 ){
            cout << "Stack Is Empty !!" << endl; 
        }

        else{
            cout << "peak => " << arr[top] << endl;
        }

    }

};

int main(){

    // Object
    Stack s(5);

    cout << endl;

    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    
    cout << endl;

    s.peak();

    cout << endl;

    s.pop();
    s.pop();
    s.pop();
    
    cout << endl;

    s.peak();

    cout << endl;

}