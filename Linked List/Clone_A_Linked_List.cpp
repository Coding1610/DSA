#include<bits/stdc++.h>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

/*

class Solution {
public:

    void insertAtTail(Node* &head, Node* &tail, int d){

        Node* newNode = new Node(d);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }

        else{
            tail -> next = newNode;
            tail = newNode;
        }

    }

    Node* copyRandomList(Node* head) {

        // Step 1 : Create A Clone List
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;

        while( temp != NULL ){
            insertAtTail( cloneHead , cloneTail , temp -> val );
            temp = temp -> next;
        }
        
        // Step 2 : Insert Nodes Of Clone List In Between Original List
        Node* originalnode = head;
        Node* clonenode = cloneHead;
        
        while( originalnode != NULL && clonenode != NULL ){
            
            Node*next = originalnode -> next;
            originalnode -> next = clonenode;
            originalnode = next;
            
            next = clonenode -> next;
            clonenode -> next = originalnode;
            clonenode = next;

        }
    
        // Step 3 : Random Pointer Copy
        temp = head;

        while( temp != NULL ){
            
            if( temp -> next != NULL ){
                temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;   
            }
            
            temp = temp -> next -> next;

        }
        
        // Step 4 : Revert Step 2 Changes
        originalnode = head;
        clonenode = cloneHead;
        
        while(  originalnode != NULL && clonenode != NULL ){
            
            originalnode -> next = clonenode -> next;
            originalnode = originalnode -> next;
            
            if( originalnode != NULL ){
                clonenode -> next = originalnode -> next ;
            }
            clonenode = clonenode -> next;

        }

        // Step 5 : Return Clone Head
        return cloneHead;
    }
};

*/