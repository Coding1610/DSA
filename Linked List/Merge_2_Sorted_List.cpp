#include<bits/stdc++.h>
using namespace std;

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

/*

Node<int>* solve( Node<int>* first, Node<int>* second ){

    Node<int>* curr1 = first;
    Node<int>* curr2 = second;
    Node<int>* next1 = curr1 -> next;
    Node<int>* next2 = curr2 -> next;

    // Here is only one node on fisrt 
    if( first -> next == NULL ){
        first -> next = second;
        return first;
    }

    while( next1 != NULL && curr2 != NULL ){

        // Add a node between two node of first
        if( curr2 -> data >= curr1 -> data && curr2 -> data <= next1 -> data ){

            next2 = curr2 -> next;
            curr1 -> next = curr2;
            curr2 -> next = next1;

            // Updating pointers
            curr1 = curr2;
            curr2 = next2; 

        }

        else{
            // If condition is false then 
            curr1 = next1;
            next1 = next1 -> next; 

            if( next1 == NULL ){
                curr1 -> next = curr2;
                return first;
            }  
        }
    }

    return first;
}


Node<int>* sortTwoLists( Node<int>* first, Node<int>* second ){

    if( first == NULL ){
        return second;
    }

    if( second == NULL ){
        return first;
    }

    if( first -> data <= second -> data){
        return solve( first , second );
    }

    else{
        return solve( second , first );
    }
}

*/