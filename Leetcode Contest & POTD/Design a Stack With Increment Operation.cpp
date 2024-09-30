#include<bits/stdc++.h>
using namespace std;

/*

class CustomStack {
public:

    int newSize;
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;

    CustomStack(int maxSize) {
        this -> newSize = maxSize;
    }
    
    void push(int x) {
        if( st1.size() == newSize ){
            return;
        }
        st1.push(x);
    }
    
    int pop() {
        if( st1.empty() ){
            return -1;
        }
        int value = st1.top();
        st1.pop();
        return value;
    }
    
    void increment(int k, int val){

        if( k >= st1.size() ){

            while( !st1.empty() ){
                int value = st1.top() + val;
                st1.pop();
                st2.push(value);
            }

            while( !st2.empty() ){
                st1.push(st2.top());
                st2.pop();
            }

        }

        else{

            int size = st1.size()-k;

            for( int i = 0 ; i < size ; i++ ){
                st2.push(st1.top()); 
                st1.pop();
            }
            
            while( !st1.empty() ){
                int newVal = st1.top() + val;
                st1.pop();
                st3.push(newVal);
            }

            while( !st3.empty() ){
                st1.push(st3.top());
                st3.pop();
            }

            while( !st2.empty() ){
                st1.push(st2.top());
                st2.pop();
            }

        }
    }
};

*/