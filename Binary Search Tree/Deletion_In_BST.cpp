#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    TreeNode* findSuc( TreeNode* root ){

        root = root -> right;
        while( root -> left ){
            root = root -> left;
        }
        return root;

    }

    TreeNode* deleteNode(TreeNode* root, int key){

        TreeNode* temp = root;

        if( temp == NULL ){
            return root;
        }

        if( key < temp -> val ){
            root -> left = deleteNode( root -> left , key );
        }

        if( key > temp -> val ){
            root -> right = deleteNode( root -> right , key );
        }

        if( key == root -> val ){

            // 0 child
            if( root -> left == NULL && root -> right == NULL ){
                delete root;
                return NULL;
            }

            // 1 child : Left
            else if( root -> left != NULL && root -> right == NULL ){
                temp = root -> left;
                delete root;
                return temp;
            }

            // 1 child : right
            else if( root -> left == NULL && root -> right != NULL ){
                temp = root -> right;
                delete root;
                return temp;
            }

            // 2 child
            else{

                if( root -> left != NULL && root -> right != NULL ){
                    TreeNode* succ = findSuc( root );
                    root -> val = succ -> val;
                    root -> right = deleteNode( root -> right , succ -> val );
                }

            }
        }

        return root;
        
    }
};

*/