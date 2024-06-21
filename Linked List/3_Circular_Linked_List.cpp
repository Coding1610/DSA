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
        int val = this -> data;
        if( next != NULL ){
            delete next;
            next = NULL;
        }
        cout << "Memory Deallocate For Value : " << val << endl;
    }

};


// Insert At Any Position
void insertAtAnyPosition( Node* &Tail , int element , int value ){

    // Empty List
    if( Tail == NULL ){
        Node* newNode = new Node( value );
        Tail = newNode;
        newNode -> next = newNode;
    }

    // Same For All Case
    else{

        Node* temp = Tail;
        while( temp -> data != element ){
            temp = temp -> next;
        }

        // Element Is Found
        Node* newNode = new Node( value );
        newNode -> next = temp -> next;
        temp -> next = newNode;

    }
}

// Delete Any Node
void deleteAnyNode( Node* &Tail , int value ){

    // Empty List
    if( Tail == NULL ){
        cout << "List Is Empty" << endl;
        return;
    }

    Node* prev = Tail;
    Node* curr = prev -> next;

    while( curr -> data != value ){
        prev = curr;
        curr = curr -> next;
    }

    // Value Found
    prev -> next = curr -> next;

    // Single Node
    if( curr == prev ){
        Tail = NULL;
        return;
    }

    // More Than Or Equal 2 Node
    else if( Tail == curr ){    
        Tail = prev;
    }

    curr -> next = NULL;
    delete curr;

}

// Display
void display( Node* Tail ){
        
    Node* temp = Tail;

    if( Tail == NULL ){
        cout << " LIST IS EMPTY " << endl;
    }

    do{
        cout << temp -> data << " -> ";
        temp = temp -> next;
    } while(Tail != temp);
    cout << temp -> data << endl;

}

int main(){

    Node* Tail = NULL;

    insertAtAnyPosition( Tail , 0 , 1 );
    display( Tail );

    insertAtAnyPosition( Tail , 1 , 2 );
    display( Tail );

    insertAtAnyPosition( Tail , 2 , 3 );
    display( Tail );

    insertAtAnyPosition( Tail , 3 , 4 );
    display( Tail );

    insertAtAnyPosition( Tail , 1 , 9 );
    display( Tail );

    deleteAnyNode( Tail , 1 );
    display( Tail );
    
}