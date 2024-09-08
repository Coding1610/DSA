#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    vector<ListNode*> splitListToParts(ListNode* head, int k){

        int size = 0;

        ListNode* curr = head;
        while( curr ){
            size++;
            curr = curr -> next;
        }

        vector<ListNode*> ans;

        curr = head;

        int full = size/k;
        int extra = size%k;

        for( int i = 0 ; i < k ; i++ ){

            ListNode* newPart = curr;
            ListNode* prev = curr;
            
            int currSize = full; 

            if( extra > 0 ){
                extra--;
                currSize++;
            }

            int j = 0;

            while( j < currSize ){
                j++;
                prev = curr;
                curr = curr -> next;
            }

            if( prev != NULL ){
                prev -> next = NULL;
            }

            ans.push_back( newPart );

        }

        return ans;

    }

};

*/