#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // Constructor
    Node( int value ){
        this -> data = value;
        this -> next = NULL;
    }

    // Distructor
    ~Node(){
        int value = this -> data;
        if( this -> next != NULL ){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory Deallocate For Value : " << value << endl;
    }

};

// Insert At Head
void insertAtHead( Node* &Head , int value ){
    
    // Create newNode
    Node* newNode = new Node(value);
    newNode -> next = Head;
    Head = newNode;

}

// Insert At Tail
void insertAtTail( Node* &Tail , int value ){

    // Create newNode
    Node* newNode = new Node(value);
    Tail -> next = newNode;
    Tail = newNode;

}

// Insert At Any Position
void insertAtAnyPosition( Node* &Head , Node* &Tail , int position , int value ){

    // At First
    if( position == 1 ){
        insertAtHead( Head , value );
        return;
    }    

    Node* temp = Head;
    int count = 1;

    while( count <= position-1 ){
        temp = temp -> next;
        count++;
    }

    // At End
    if( temp -> next == NULL ){
        insertAtTail( Tail , value );
        return;
    }

    Node* newNode = new Node(value);
    newNode -> next = temp -> next;
    temp -> next = newNode;

}

// Delete Any Node
void deleteAnyNode( Node* &Head , int value ){

    Node* curr = Head;
    Node* prev = NULL;

    if( Head == NULL ){
        cout << "ERROR : Your Linked List Is Already Empty" << endl;
        return;
    }

    while( curr -> data != value ){
        prev = curr;
        curr = curr -> next;

        // Value Was Not Found
        if( curr == NULL ){
            cout << value << " Was Not Found" << endl;
            return;
        }

    }

    // Value Was Found 
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;

}

// Display
void display( Node* &Head ){

    if( Head == NULL ){
        cout << "ERROR : Your Linked List Is Empty " << endl;
        return;
    }

    Node* temp = Head;

    while( temp != NULL ){
        cout << temp -> data << " => ";
        temp = temp -> next;
    }
    cout << "null" << endl;

}

int main(){

    Node* newNode = new Node(1);
    cout << "Node Data : " << newNode -> data << endl;
    cout << "Node Address : " << newNode -> next << endl;

    // Head
    Node* Head = newNode;

    // Tail
    Node* Tail = newNode;

    insertAtHead( Head , 2 );
    insertAtHead( Head , 3 );
    insertAtHead( Head , 4 );
    insertAtHead( Head , 5 );
    
    // display( Head );

    insertAtTail( Tail , 6 );
    insertAtTail( Tail , 7 );
    insertAtTail( Tail , 8 );
    insertAtTail( Tail , 9 );
    insertAtTail( Tail , 10 );

    // display( Head );

    insertAtAnyPosition( Head , Tail , 1 , 100 );
    insertAtAnyPosition( Head , Tail , 1 , 200 );
    insertAtAnyPosition( Head , Tail , 1 , 300 );
    insertAtAnyPosition( Head , Tail , 1 , 400 );

    // display( Head );

    insertAtAnyPosition( Head , Tail , 3 , 60 );
    insertAtAnyPosition( Head , Tail , 7 , 61 );
    insertAtAnyPosition( Head , Tail , 8 , 62 );
    insertAtAnyPosition( Head , Tail , 2 , 63 );

    display( Head );

    deleteAnyNode( Head , 62 );

    display( Head );
    
    deleteAnyNode( Head , 26 );

    display( Head );


}