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

    ListNode* addBoth( ListNode* &num1 , ListNode* &num2 ){

        if( num1 == NULL ){
            return num2;
        }

        if( num2 == NULL ){
            return num1;
        }

        if( num1 == NULL && num2 == NULL ){
            insertAtTail( num1 , 0 );
            return num1;
        }

        int c = 0;
        int sum = 0;
        int digit = 0;

        ListNode* temp1 = num1;
        ListNode* temp2 = num2;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while( temp1 != NULL || temp2 != NULL || c != 0 ){
            
            int val1 = 0;
            if( temp1 != NULL ){
                val1 = temp1 -> val;
            }

            int val2 = 0;
            if( temp2 != NULL ){
                val2 = temp2 -> val;
            }

            sum = c + val1 + val2;
            digit = sum%10;
            insertAtTail( tail , digit );
            c = sum/10;

            if( temp1 != NULL ){
                temp1 = temp1 -> next;
            }

            if( temp2 != NULL ){
                temp2 = temp2 -> next;
            }
        }
        return dummy -> next;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* num1 = reverse(l1);
        ListNode* num2 = reverse(l2);
        ListNode* num3 = addBoth(num1,num2);
        ListNode* sum = reverse(num3);
        return sum;

    }
};

*/