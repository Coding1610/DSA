#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int value){
        this -> data = value;
        this -> next = NULL;
        this -> prev = NULL;
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

// Insert At Head
void insertAtHead( Node* &Head , int value ){

    // Create newNode
    Node* newNode = new Node(value);
    newNode -> next = Head;
    Head -> prev = newNode;
    Head = newNode;

}

// Insert At Tail
void insertAtTail( Node* &Tail , int value ){

    // Create newNode
    Node* newNode = new Node(value);
    newNode -> prev = Tail;
    Tail -> next = newNode;
    Tail = newNode;

}

// Insert At Any Position
void insertAtAnyPosition( Node* &Head , Node* &Tail , int position , int value ){

    // At Front
    if( position == 0 ){
        insertAtHead( Head , value );
        return;
    }

    Node* curr = Head;
    Node* pre = NULL;
    int count = 1;

    while( count <= position){
        
        pre = curr;
        curr = curr -> next;
        count++;

        // Invalid Position
        if( pre -> next == NULL && curr == NULL ){
            cout << "Invalid Position" << endl;
            return;
        }

    }

    if( curr == NULL ){
        insertAtTail( Tail , value );
        return;
    }

    else{
        // Valid Position
        Node* newNode = new Node(value);
        newNode -> prev = pre;
        newNode -> next = curr;
        curr -> prev = newNode;
        pre -> next = newNode;
    }

}

// Delete Node With Value
void deleteNodeWithValue( Node* &Head , int value ){

    if( Head == NULL ){
        cout << "ERROR : Empty List" << endl;
        return;
    }

    while( Head != NULL && Head -> data == value ){
        Head = Head -> next;
    }

    Node* curr = Head;
    Node* pre = NULL;

    while( curr != NULL ){

        if( curr -> data == value ){
            pre -> next = curr -> next;
            curr -> next -> prev = pre;
            curr = curr -> next;
        }
        else{
            pre = curr;
            curr = curr -> next;
        }
    }

}

// Delete Node With Position
void deleteNodeWithPosition( Node* &Head , int position ){

    // Delete At Head
    if( position == 1 ){

        Node* temp = Head;
        temp -> next -> prev = NULL;
        Head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{

        int count = 1;
        Node* pre = NULL;
        Node* curr = Head;

        while( count < position ){
            pre = curr ;
            curr = curr -> next;
            count ++;
        }

        curr -> prev = NULL;
        pre -> next = curr -> next;

        // MEMMORY DEALLOCATED
        curr -> next = NULL;
        delete curr;
    }
    
}

// Display
void display( Node* &Head ){

    Node* temp = Head;
    while( temp != NULL ){
        cout << temp -> data << " => ";
        temp = temp -> next;
    }
    cout << "null" << endl;

}

int main(){

    Node* newNode = new Node(10);

    cout << "Data : " << newNode -> data << endl;
    cout << "Next Address : " << newNode -> next << endl;
    cout << "Prev Address : " << newNode -> prev << endl;

    // Head
    Node* Head = newNode;
    cout << "Head : " << Head -> data << endl;

    // Tail 
    Node* Tail = newNode;
    cout << "Tail : " << Tail -> data << endl;

    insertAtHead( Head , 11 );
    insertAtHead( Head , 12 );
    insertAtHead( Head , 13 );
    insertAtHead( Head , 14 );
    insertAtHead( Head , 15 );

    display( Head );

    insertAtTail( Tail , 9 );
    insertAtTail( Tail , 8 );
    insertAtTail( Tail , 7 );
    insertAtTail( Tail , 6 );
    insertAtTail( Tail , 5 );

    display( Head );

    insertAtAnyPosition( Head , Tail , 0 , 17 );
    insertAtAnyPosition( Head , Tail , 1 , 16 );
    insertAtAnyPosition( Head , Tail , 2 , 16 );
    insertAtAnyPosition( Head , Tail , 3 , 94 );
    insertAtAnyPosition( Head , Tail , 8 , 96 );
    insertAtAnyPosition( Head , Tail , 11 , 99 );

    display( Head );

    // Invalid Position
    insertAtAnyPosition( Head , Tail , 17 , 91 );
    display( Head );

    deleteNodeWithValue( Head , 10 );
    display( Head );

    deleteNodeWithValue( Head , 16 );
    display( Head );

    deleteNodeWithPosition( Head , 1 );
    display( Head );

    deleteNodeWithPosition( Head , 6 );
    display( Head );

}