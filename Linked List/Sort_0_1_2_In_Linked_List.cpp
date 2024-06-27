#include<bits/stdc++.h>
using namespace std;

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

/* Approach : 1

Node* sortList(Node *head){
    
    int zero = 0;
    int one = 0;
    int two = 0;

    Node* temp = head;

    while( temp != NULL ){

        if( temp -> data == 0 ){
            zero++;
        }
        else if( temp -> data == 1 ){
            one++;
        }
        else{
            two++;
        }
        temp = temp -> next;
    }

    temp = head;

    while( zero != 0 && temp != NULL ){
        temp -> data = 0;
        zero--;
        temp = temp -> next;
    }

    while( one != 0 && temp != NULL ){
        temp -> data = 1;
        one--;
        temp = temp -> next;
    }

    while( two != 0 && temp != NULL ){
        temp -> data = 2;
        two--;
        temp = temp -> next;
    }

    return head;
    
}

*/

/* Approach : 2 

void insertAtTail( Node* &tail , Node* curr ){

    tail -> next = curr;
    tail = curr;

}

Node* sortList( Node *head ){
   
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    while( curr != NULL ){

        if( curr -> data == 0 ){
            insertAtTail( zeroTail , curr );
        }

        else if( curr -> data == 1 ){
            insertAtTail( oneTail , curr );
        }

        else{
            insertAtTail( twoTail , curr );
        }

        curr = curr -> next;

    }

    if( oneHead -> next != NULL ){
        zeroTail -> next = oneHead -> next;
    }
    else{
        zeroTail -> next = twoHead -> next;
    }
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    head = zeroHead -> next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}

*/