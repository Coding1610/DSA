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

    int getLen( ListNode* head ){

        int len = 0;

        while( head != NULL ){
            head = head -> next;
            len++;
        }

        return len;
        
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if( head == NULL ){
            return NULL;
        } 

        int count = 0;
        ListNode* pre = NULL;
        ListNode* forward = NULL;
        ListNode* curr = head;

        while( count < k && curr != NULL ){

            forward = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = forward;
            count++;

        }

        // Remaining Length >= k 
        if( forward != NULL && getLen(forward) >= k ){
            head -> next = reverseKGroup( forward , k );
        }

        // Len < k 
        else if( getLen(forward) < k ){
            head -> next = forward;
        }

        return pre;

    }
};

*/