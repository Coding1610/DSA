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


/* Approach : 1 

class Solution {
public:

    ListNode* mid( ListNode* head ){

        ListNode* slow = head;
        ListNode* fast = head -> next;

        while( fast != NULL && fast -> next != NULL ){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;

    }
};

*/

/* Approach : 2

class Solution {
public:
    ListNode* middleNode(ListNode* head){

        int count = 0;
        ListNode* temp1 = head;

        while( temp1 != NULL ){
            temp1 = temp1 -> next;
            count++;
        }

        int Middle = count/2;
        ListNode* temp2 = head;
        count = 0;

        while( count < Middle ){
            temp2 = temp2 -> next;
            count++;
        }      

        return temp2;
    }
};

*/