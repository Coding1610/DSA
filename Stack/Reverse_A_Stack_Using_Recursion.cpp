#include<bits/stdc++.h>
using namespace std;

/*
 
void bottomInsert( stack<int>& stack , int value ){

    if( stack.empty() ){
        stack.push(value);
        return;
    }

    int tp = stack.top();
    stack.pop();
    bottomInsert( stack ,value );
    stack.push( tp );
    
}

void reverseStack(stack<int> &stack){

    if( stack.empty() ){
        return;
    }

    int value = stack.top();
    stack.pop();
    reverseStack( stack );
    bottomInsert( stack , value);
    
}

*/