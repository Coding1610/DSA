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
    void reorderList(ListNode* head){

        if( !head || !head -> next ){
            return;
        }

        int len = 0;
        stack<ListNode*> st;
        ListNode* temp = head;

        while( temp ){
            st.push( temp );
            temp = temp->next;
            len++;
        }

        ListNode* curr = head;
        ListNode* forward = head->next;

        for( int i = 0 ; i < len/2 ; i++){

            ListNode* newNode = st.top();
            st.pop();
            curr -> next = newNode;
            newNode -> next = forward;
            curr = forward;
            if( forward ){
                forward = forward -> next;
            }

        }
        curr->next = NULL;
    }
};

*/