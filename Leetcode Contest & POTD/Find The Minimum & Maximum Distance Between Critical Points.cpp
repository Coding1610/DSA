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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        int index = 1;
        vector<int> criticalDis;
        
        ListNode* pre = head;
        ListNode* temp = head -> next;
        ListNode* curr = temp -> next;

        while( temp -> next != NULL ){

            if( temp -> val > pre -> val && temp -> val > curr -> val ){
                criticalDis.push_back(index);
            }

            else if( temp -> val < pre -> val && temp -> val < curr -> val ){
                criticalDis.push_back(index);
            }
            
            pre = temp;
            temp = curr;
            curr = curr -> next;
            index++;

        }

        if( criticalDis.size() < 2 ){
            return {-1,-1};
        }

        int mini = INT_MAX;
        int maxi = criticalDis.back() - criticalDis.front();

        for( int i = 1 ; i < criticalDis.size() ; i++ ){
            mini = min( mini , (criticalDis[i]-criticalDis[i-1]) );   
        }

        return {mini,maxi};
        
    }
};

*/