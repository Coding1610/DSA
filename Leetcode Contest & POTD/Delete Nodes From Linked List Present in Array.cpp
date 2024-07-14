#include<bits/stdc++.h>
using namespace std;

/*

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 
class Solution {
public:

    ListNode* modifiedList(vector<int>& nums, ListNode* head){

        unordered_set<int> values(nums.begin(), nums.end());
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while( curr != nullptr ){

            if( values.find( curr -> val ) != values.end() ){
                prev -> next = curr -> next; 
            }
            else{
                prev = curr;  
            }
            curr = curr -> next;

        }
        return dummy.next;
    }

};

*/