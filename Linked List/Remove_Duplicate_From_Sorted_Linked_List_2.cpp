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
    ListNode* deleteDuplicates(ListNode* head){

        if( head == NULL || head -> next == NULL ){
            return head;
        }

        ListNode dummy(0);  
        dummy.next = head;
        ListNode* pre = &dummy; 
        ListNode* curr = head;

        while( curr != NULL ){

            bool duplicate = false;

            while( curr -> next != NULL && curr -> val == curr -> next -> val ){
                curr = curr -> next;
                duplicate = true;
            }

            if(duplicate){
                pre -> next = curr -> next;
            }

            else{
                pre = curr;
            }

            curr = curr -> next;

        }
        return dummy.next;
    }
};

*/