#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node( int value ){
        this -> data = value;
        this -> next = NULL;
    }

    ~Node(){
        
        int value = this -> data;
        if( this -> next != NULL ){
            delete next;
            this -> next = NULL;
        }
        cout << "poped => " << value << endl;
    
    }

};

// Push
void push( Node* &head , Node* &tail , int value ){

    Node* newNode = new Node(value);

    if( head == NULL ){
        head = newNode;
        tail = newNode;
    }

    else{
        tail -> next = newNode;
        tail = newNode;
    }

    cout << "pushed => " << value << endl;

}

// Pop
void pop( Node* &head , Node* &tail ){

    if( head == NULL ){
        cout << "Stack Is Empty" << endl;
        return;
    }

    if( head == tail ){
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while( temp -> next != tail ){
        temp = temp -> next;
    }

    delete tail;
    temp -> next = NULL;
    tail = temp;
    
}

// Peak
void peak( Node* &tail ){

    if( tail == NULL ){
        cout << "Stack Is Empty !!" << endl;
        return;
    }

    else{
        cout << "Peak => " << tail -> data << endl;
    }

}

// Display
void display( Node* &head ){

    Node* temp = head;

    if( head == NULL ){
        cout << "Stack Is Empty !!" << endl;
        return;
    }

    while( temp != NULL ){
        cout << temp -> data << " => ";
        temp = temp -> next;
    }

    cout << "x" << endl;

}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    cout << endl;

    push( head , tail , 41 );
    push( head , tail , 42 );
    push( head , tail , 43 );
    push( head , tail , 44 );
    push( head , tail , 45 );
    cout << endl;

    display( head );
    cout << endl;

    peak(tail);
    cout << endl;

    push( head , tail , 46 );
    push( head , tail , 47 );
    push( head , tail , 48 );
    push( head , tail , 49 );
    push( head , tail , 50 );
    push( head , tail , 51 );
    cout << endl;

    peak(tail);
    cout << endl;

    display( head );
    cout << endl;

    pop( head , tail );
    cout << endl;

    display( head );
    cout << endl;

    pop( head , tail );
    cout << endl;

    display( head );
    cout << endl;

    pop( head , tail );
    cout << endl;

    display( head );
    cout << endl;

}