#include<bits/stdc++.h>
using namespace std;

/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

/*

Node *removeDuplicates(Node *head){

    Node* pre = NULL;
    Node* curr = head;

    unordered_map<int,bool> visited; 

    while( curr != NULL ){
      
      if( visited[ curr -> data ] == true ){
        pre -> next = curr -> next;
        delete( curr );
        curr = pre -> next;
      }

      else{
        visited[ curr -> data ] = true;
        pre = curr;
        curr = curr -> next;
      }

    }
    return head;
}

*/