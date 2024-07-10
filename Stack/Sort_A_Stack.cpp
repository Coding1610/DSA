#include<bits/stdc++.h>
using namespace std;

/*

void insertHold( stack<int>& st , int value ){

    if( st.empty() || value > st.top() ){
        st.push(value);
        return;
    }
    int hold = st.top();
    st.pop();
    insertHold( st , value );
    st.push( hold );
}

void sortStack(stack<int> &stack){

    if( stack.empty() ){
        return;
    }
    int value = stack.top();
    stack.pop();
    sortStack( stack );
    insertHold( stack , value );
}

*/