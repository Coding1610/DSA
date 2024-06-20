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

    int Bin_to_Dec( string n ){

        int num = 0;
        int p2 = 1;
        int len = n.length();
        for( int i = len-1 ; i >= 0 ; i-- ){
            if( n[i] == '1' ){
                num += p2;
            }
            p2 = p2*2;
        }
        return num;
    }

    int getDecimalValue(ListNode* head){

        string str = "";
        ListNode* temp = head;

        while( temp != NULL ){
            str += to_string(temp -> val);
            temp = temp -> next;
        }

        return Bin_to_Dec(str);
     
    }
};

*/