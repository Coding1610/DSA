#include<bits/stdc++.h>
using namespace std;

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

/*

class Solution
{
    public:
    int findFirstNode(Node* head){
        
        // Base Case
        if( head == NULL ){
            return -1;
        }
        
        Node* slow = head;
        Node* fast = head;
        
        while( fast && fast -> next ){
            
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if( slow == fast ){
                
                slow = head;
                
                while( slow != fast ){
                    slow = slow -> next;
                    fast = fast -> next;
                }
                return slow -> data;
            }
        }
        return -1;
    }
};

*/