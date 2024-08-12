#include<bits/stdc++.h>
using namespace std;

/*

void solve( TreeNode<int>* root , vector<int>& inorder ){

    if( root == NULL ){
        return;
    }

    TreeNode<int>* curr = root;

    while( curr != NULL ){

        if( curr -> left == NULL ){
            inorder.push_back( curr -> data );
            curr = curr -> right;
        }

        else{

            TreeNode<int>* pred = curr -> left;

            while( pred -> right != NULL && pred -> right != curr ){
                pred = pred -> right;
            }

            if( pred -> right == NULL ){
                pred -> right = curr;
                curr = curr -> left;
            }

            else{
                pred -> right = NULL;
                inorder.push_back( curr -> data );
                curr = curr -> right;
            }

        }

    }

}

TreeNode<int>* flatten(TreeNode<int>* root){

    vector<int> inorder;
    solve( root , inorder );

    TreeNode<int>* newRoot = new TreeNode<int>( inorder[0] );
    newRoot -> left = NULL;

    TreeNode<int>* temp = newRoot;

    for( int i = 1 ; i < inorder.size() ; i++ ){

        TreeNode<int>* node = new TreeNode<int>( inorder[i] );
        temp -> right = node;
        node -> left = NULL;
        temp = node;

    }

    temp -> right = NULL;

    return newRoot;

}

*/