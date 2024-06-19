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