#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/*

class Solution {
public:

    void insertAtTail( ListNode* &head , ListNode* &tail , int data ){

        ListNode* newNode = new ListNode(data);

        if( head == NULL ){
            head = newNode;
            tail = newNode;
        }

        else{
            tail -> next = newNode;
            tail = newNode;
        }

    }

    ListNode* mergeNodes(ListNode* head){

        ListNode* temp = head;
        ListNode* dHead = NULL;
        ListNode* dTail = NULL;
        int sum = 0;

        while( temp -> next != NULL ){

            if( temp -> val == 0 ){

                ListNode* curr = temp -> next;   

                while( curr -> val != 0 ){
                    sum += curr -> val;
                    curr = curr -> next;
                }

                insertAtTail( dHead , dTail , sum );
                sum = 0;
                temp = curr;
                
            }
        }

        return dHead;
    
    }
};

*/