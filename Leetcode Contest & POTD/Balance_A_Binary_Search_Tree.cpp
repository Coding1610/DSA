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

    void inorder( TreeNode* root , vector<int> &arr ){

        if( root == NULL ){
            return;
        }

        inorder( root -> left , arr );
        arr.push_back( root -> val );
        inorder( root -> right , arr );

    }

    TreeNode* balanceBST( vector<int> arr , int s , int e ){

        if( s > e ){
            return NULL;
        }

        int mid = (s+e)/2;
        TreeNode* node = new TreeNode( arr[mid] );

        node -> left = balanceBST( arr , s ,  mid-1 );
        node -> right = balanceBST( arr , mid+1 , e );

        return node;
    }

    TreeNode* balanceBST( TreeNode* root ){

        vector<int>arr;
        inorder( root , arr );

        int s = 0;
        int e = arr.size()-1;
        TreeNode* ans = balanceBST( arr , s , e );
        return ans;

    }
    
};

*/