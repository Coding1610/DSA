/*

class Solution {
public:
    bool hasCycle(ListNode *head) {

        if( head == NULL || head -> next == NULL ){
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head -> next -> next;

        while( slow != fast ){
            if( fast == NULL || fast -> next == NULL ){
                return false;
            }
            else{
                slow = slow -> next;
                fast = fast -> next -> next;
            }
        }
        return true;
    }
};

*/