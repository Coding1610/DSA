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
    ListNode* removeNthFromEnd(ListNode* head, int n){
        
        int count = 0;
        ListNode* temp = head;
        while( temp != NULL ){
            temp = temp -> next;
            count++;
        }

        int k = count-n;
        count = 1;

        if( k == 0 ){
            head = head -> next;
            return head;
        }
        
        ListNode* curr = head;
        ListNode* prev = NULL;

        while( count <= k ){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        // At k-1 index
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

        return head;
    }
};

*/