#include<bits/stdc++.h>
using namespace std;

// Push
void push( int stack[] , int *top , int value , int size ){

    if( *top >= size ){
        cout << "Stack Is Overflow !!" << endl;
    }

    else{
        (*top)++;
        stack[*top] = value;
        cout << "pushed => " << value << endl;
    }

}

// Pop
void pop( int stack[] , int *top , int size ){

    if( *top < 0 ){
        cout << "Stack Is Empty !!" << endl;
        return;
    }

    else{
        int value = stack[*top];
        (*top)--;
        cout << "poped => " << value << endl;
    }

}

// Peak
void peak( int stack[] , int top ){

    if( top < 0 ){
        cout << "Stack Is Empty !!" << endl;
        return;
    }
    
    else{
        cout << "peak => " << stack[top] << endl;
    }

}

int main(){

    int n = 5;
    int stack[n];
    int top = -1;

    cout << endl;

    push( stack , &top , 10 , n );
    push( stack , &top , 20 , n );
    push( stack , &top , 30 , n );
    push( stack , &top , 40 , n );
    push( stack , &top , 50 , n );

    cout << endl;

    peak( stack , top );

    cout << endl;

    pop( stack , &top , n );
    pop( stack , &top , n );

    cout << endl;

    push( stack , &top , 60 , n );
    push( stack , &top , 70 , n );

    cout << endl;

    peak( stack , top );

    cout << endl;

}