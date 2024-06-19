#include<bits/stdc++.h>
using namespace std;

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

/*

void deleteNode(LinkedListNode<int> * node) {

    LinkedListNode<int>* temp;
    temp = node -> next;
    swap( temp -> data , node -> data );
    node -> next = temp -> next;
    delete temp;
    
}

*/