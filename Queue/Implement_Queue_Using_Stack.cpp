#include<bits/stdc++.h>
using namespace std;

/*

class MyQueue {
public:

    stack<int> s1;
    stack<int> s2;
    
    MyQueue() {}
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {

        if( s2.empty() ){
            while( !s1.empty() ){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int value = s2.top();
        s2.pop();
        return value;

    }
    
    int peek() {

        if( s2.empty() ){
            while( !s1.empty() ){
                s2.push(s1.top());
                s1.pop();
            }
        } 
        return s2.top();
        
    }
    
    bool empty() { return s2.empty() && s1.empty(); }

};

*/