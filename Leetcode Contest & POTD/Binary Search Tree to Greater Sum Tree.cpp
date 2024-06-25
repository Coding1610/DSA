#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*

class Solution {
public:

    void modifyBST( TreeNode* root , int &sum ){

        // Base Case
        if( root == NULL ){
            return;
        }

        // Reverse INORDER Traversal : Right -> Root -> Left

        // Right
        if( root -> right != NULL ){
            modifyBST( root -> right , sum );
        }

        // Root
        // get out of loop when we are at rightmost leaf node 
        // modify node -> val
        root -> val += sum;

        // we need to add sum of previous node in current node for that 
        sum = root -> val;

        // Left
        if( root -> left != NULL ){
            modifyBST( root -> left , sum );
        }

    }

    TreeNode* bstToGst(TreeNode* root) {

        // Base Case
        if( root == NULL ){
            return root;
        }       

        int sum = 0;
        modifyBST( root , sum );
        return root;

    }
};

*/