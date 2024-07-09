#include<bits/stdc++.h>
using namespace std;

/*
 
class TwoStack {

public:

    int t1;
    int t2;
    int size;
    int *arr;

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        this -> t1 = -1;
        this -> t2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        if( t1+1 != t2 ){
            arr[++t1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if( t2-1 != t1 ){
            arr[--t2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if( t1 != -1 ){
            int value = arr[t1];
            t1--;
            return value;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if( t2 != size ){
            int value = arr[t2];
            t2++;
            return value;
        }
        else{
            return -1;
        }
    }
};

*/