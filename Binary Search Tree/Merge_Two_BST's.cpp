#include<bits/stdc++.h>
using namespace std;

/*

void inorder( TreeNode* root , vector<int>& ans ){

    if( root == NULL ){
        return;
    }

    TreeNode* curr = root;

    while( curr != NULL ){

        if( curr -> left == NULL ){
            ans.push_back( curr -> data );
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
                ans.push_back( curr -> data );
                curr = curr -> right;
            }
            
        }
    }
}

vector<int> mergeBST( TreeNode *root1 , TreeNode *root2 ){

    vector<int> ans;
    inorder( root1 , ans );
    inorder( root2 , ans );
    sort(ans.begin(),ans.end());
    return ans;

}

*/