#include<bits/stdc++.h>
using namespace std;

/*

struct CompareListNode{
    bool operator()( ListNode* a , ListNode* b ){
        return a -> val > b -> val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists){

        priority_queue< ListNode* , vector<ListNode*> , CompareListNode > minHeap;

        int size = lists.size();

        if( size == 0 ){
            return NULL;
        }

        for( int i = 0 ; i < size ; i++ ){
            if( lists[i] != NULL ){
                minHeap.push( lists[i] );
            }
        }   

        ListNode* dummy = new ListNode;
        ListNode* ans = dummy;

        while( !minHeap.empty() ){

            ListNode* node = minHeap.top();
            minHeap.pop();

            ans -> next = node;
            ans = ans -> next;

            if( node -> next != NULL ){
                minHeap.push( node -> next );
            }

        }

        return dummy -> next;

    }
};

*/