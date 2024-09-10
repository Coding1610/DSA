#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head){

        if( head == NULL || head -> next == NULL ){
            return head;
        }

        ListNode* curr = head;

        while( curr -> next != NULL ){
  
            int gcd = __gcd( curr -> val , curr -> next -> val );
            ListNode* newNode = new ListNode(gcd);
            ListNode* next = curr  -> next;
            curr -> next = newNode;
            newNode -> next = next;
            curr = next;

        }

        return head;
        
    }
};

*/