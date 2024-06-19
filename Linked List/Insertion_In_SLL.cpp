#include<bits/stdc++.h>
using namespace std;

/************************************************************

    Following is the LinkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

/*

Node * insert(Node * head, int n, int pos, int val) {

    // Base Case
    if( head == NULL ){
        return head;
    }

    // Oth Position 
    if( pos == 0 ){
        Node* newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
        return head;
    }

    Node* temp = head;
    int count = 1;

    while( count <= pos-1 ){
        temp = temp -> next;
        count++;

        // Invalid Position
        if( temp -> data == -1 ){
            return head;
        }
    }

    // Valid Position
    Node* newNode = new Node(val);
    newNode -> next = temp -> next;
    temp -> next = newNode;

    return head;

}

*/