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

    void solve( TreeNode* root , int &sum ){

        // Base Case
        if( root == NULL ){
            return;
        }

        // Right 
        if( root -> right != NULL ){
            solve( root -> right , sum );
        }

        root -> val += sum;
        sum = root -> val;

        // Left
        if( root -> left != NULL ){
            solve( root -> left , sum );
        }

    }
    
    TreeNode* convertBST(TreeNode* root) {

        // Base Case
        if( root == NULL ){
            return root;
        }        

        int sum = 0;
        solve( root , sum );
        return root;

    }

};

*/