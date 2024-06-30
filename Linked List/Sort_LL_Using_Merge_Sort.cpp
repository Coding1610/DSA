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

    ListNode* middle( ListNode* head ){

        // Base Case
        if( head == NULL || head -> next == NULL ){
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head -> next;
        
        while( fast != NULL && fast -> next != NULL ){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        return slow;

    }

    ListNode* mergeBothList( ListNode* left , ListNode* right ){

        // Base Case
        if( left == NULL && right == NULL ){
            return NULL;
        }

        if( left == NULL ){
            return right;
        }

        if( right == NULL ){
            return left;
        }

        // Make Dummy List
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while( left != NULL && right != NULL ){

            if( left -> val <= right -> val ){
                temp -> next = left;
                temp = left;
                left = left -> next;
            }

            else{
                temp -> next = right;
                temp = right;
                right = right -> next;
            }
        }

        while( left != NULL ){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }

        while( right != NULL ){
            temp -> next = right;
            temp = right;
            right = right -> next;
        }

        return dummy -> next;

    }

    ListNode* sortList(ListNode* head) {
        
        if( head == NULL || head -> next == NULL ){
            return head;
        }

        // Middle
        ListNode* mid = middle( head );

        // Left List
        ListNode* leftList = head;

        // Right List
        ListNode* rightList = mid -> next;

        mid -> next = NULL;

        leftList = sortList(leftList);
        rightList = sortList(rightList);

        ListNode* result = mergeBothList( leftList , rightList );

        return result;

    }
};

*/