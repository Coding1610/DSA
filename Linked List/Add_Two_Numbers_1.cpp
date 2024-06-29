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

/* Brute Force 

class Solution {
public:

    void insertAtTail( ListNode* &Tail , int value ){

        ListNode* newNode = new ListNode(value);
        if( Tail == NULL ){
            Tail = newNode;
        }   
        else{
            Tail -> next = newNode;
            Tail = newNode;
        }
    }

   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){

        ListNode*temp1 = l1;
        ListNode* temp2 = l2;

        string str1 = "";
        string str2 = "";

        while( temp1 != NULL ){
            str1 += to_string(temp1 -> val);
            temp1 = temp1 -> next;
        }

        while( temp2 != NULL ){
            str2 += to_string(temp2 -> val);
            temp2 = temp2 -> next;
        }

        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());

        long long int n1 = stoi(str1);
        long long int n2 = stoi(str2);

        long long int sum = n1+n2;
        ListNode* dummy = new ListNode(-1);
        ListNode* Tail = dummy;

        if( sum == 0 ){
            insertAtTail(Tail,0);
            return dummy -> next;
        }

        while( sum != 0 ){
            int rem = sum%10;
            sum = sum/10;
            insertAtTail(Tail,rem);
        }
        return dummy -> next;
    }
};

*/

/* Optimal 

class Solution {
public: 

    void insertAtTail( ListNode* &tail , int value ){

        ListNode* newNode = new ListNode(value);

        if( tail == NULL ){
            tail = newNode;
        }

        else{
            tail -> next = newNode;
            tail = newNode;
        }

    }

    ListNode* addBoth( ListNode* &num1 , ListNode* &num2 ){

        if( num1 == NULL ){
            return num2;
        }

        if( num2 == NULL ){
            return num1;
        }

        if( num1 == NULL && num2 == NULL ){
            insertAtTail( num1 , 0 );
            return num1;
        }

        int c = 0;
        int sum = 0;
        int digit = 0;

        ListNode* temp1 = num1;
        ListNode* temp2 = num2;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while( temp1 != NULL || temp2 != NULL || c != 0 ){
            
            int val1 = 0;
            if( temp1 != NULL ){
                val1 = temp1 -> val;
            }

            int val2 = 0;
            if( temp2 != NULL ){
                val2 = temp2 -> val;
            }

            sum = c + val1 + val2;
            digit = sum%10;
            insertAtTail( tail , digit );
            c = sum/10;

            if( temp1 != NULL ){
                temp1 = temp1 -> next;
            }

            if( temp2 != NULL ){
                temp2 = temp2 -> next;
            }
        }
        return dummy -> next;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* num3 = addBoth( l1 , l2 );
        return num3;

    }
};

*/