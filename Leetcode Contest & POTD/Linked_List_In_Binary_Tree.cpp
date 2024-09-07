#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    bool dfs( ListNode* head , ListNode* curr , TreeNode* root ){

        if( curr == NULL ) return true;
        if( root == NULL ) return false;

        if( root -> val == curr -> val ){
            curr = curr -> next;
        }
        else if( root -> val == head -> val ){
            head = head -> next;
        }
        else{
            curr = head;
        }

        return dfs( head , curr , root -> left ) || dfs( head , curr , root -> right );
    
    }

    bool isSubPath(ListNode* head, TreeNode* root){
        return dfs( head , head , root );
    }
    
};

*/