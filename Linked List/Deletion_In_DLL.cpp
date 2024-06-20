#include <bits/stdc++.h> 
using namespace std;

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node *prev;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
                this->prev = NULL;
            }
        };

*****************************************************************/

/*

void deleteNode(Node * ( & head), int pos) {
    
    if( pos == 0){
        head=head->next;
    }

    int i = 0;
    Node* temp = head;

    while( temp ){

        if( i == pos-1 ){
            temp -> next = temp -> next -> next;
            break;
        }
        i++;
        temp = temp -> next;
        
    }
}

*/