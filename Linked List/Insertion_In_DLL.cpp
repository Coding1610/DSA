#include<bits/stdc++.h>
using namespace std;

/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val) {
            this->data = val;
            next = NULL;
            prev = NULL;
        }
        ~Node() {
            if(next != NULL || prev != NULL){
                delete next;
            }
        }
};

************************************************************/

/*

Node* insert(int k, int val, Node *head) {
    
    // Base Case : Insert At Head
    if( k == 0 ){
        Node* newNode = new Node(val);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
        return head;
    }

    int count = 1;
    Node* pre = NULL;
    Node* curr = head;
    
    while( count <= k-1 ){

        pre = curr;
        curr = curr -> next;
        count++;

        if( curr -> next == NULL ){
            Node* newNode = new Node(val);
            curr -> next = newNode;
            newNode -> prev = curr;
            return head;
        }
    }

    Node* newNode = new Node(val);
    newNode -> next = curr -> next;
    newNode -> prev = curr -> next -> prev;
    curr -> next = newNode;
    curr -> next -> prev = newNode;
    return head;

}

*/