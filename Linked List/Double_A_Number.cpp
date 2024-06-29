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

    ListNode* reverse( ListNode* &head ){

        if( head == NULL ){
            return head;
        }

        ListNode* pre = NULL;
        ListNode* next = NULL;
        ListNode* curr = head;

        while( curr != NULL ){
            next = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = next;
        }

        return pre;

    }

    void insertAtTail( ListNode* &tail , int value ){

        ListNode* newNode = new ListNode(value);

        if( tail == NULL ){
            tail = newNode;
        }

        else{
            tail -> next = newNode;
            tail = newNode;
        }

    }

    ListNode* multiply2( ListNode* num ){

        if( num == NULL ){
            insertAtTail(num,0);
            return num;
        }

        int c = 0;
        int digit = 0;
        int multiply = 0;

        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        while( num != NULL || c != 0 ){

            int val = 0;
            if( num != NULL ){
                val = num -> val;
            }

            multiply = (val*2)+c;
            digit = multiply%10;
            insertAtTail( tail , digit );
            c = multiply/10;

            if( num != NULL ){
                num = num -> next;
            }
        }
        return dummy -> next;
    }

    ListNode* doubleIt(ListNode* head) {

        ListNode* num = reverse(head);
        ListNode* doubleNum = multiply2(num);
        ListNode* ans = reverse(doubleNum);
        return ans;
        
    }
};

*/