#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void solve( TreeNode* root , vector<int>& inorder ){


        if( root == NULL ){
            return;
        }

        TreeNode* curr = root;

        while( curr != NULL ){

            if( curr -> left == NULL ){
                inorder.push_back( curr -> val );
                curr = curr -> right;
            }

            else{

                TreeNode* pred = curr -> left;

                while( pred -> right != NULL && pred -> right != curr ){
                    pred = pred -> right;
                }

                if( pred -> right == NULL ){
                    pred -> right = curr;
                    curr = curr -> left;
                }

                else{
                    pred -> right = NULL;
                    inorder.push_back( curr -> val );
                    curr = curr -> right;
                }

            }

        }

    }

    bool isValidBST(TreeNode* root){

        vector<int> inorder;
        solve( root , inorder );

        for( int i = 0 ; i < inorder.size()-1 ; i++ ){
            if( inorder[i] >= inorder[i+1] ){
                return false;
            }
        }

        return true;
    
    }
    
};

*/