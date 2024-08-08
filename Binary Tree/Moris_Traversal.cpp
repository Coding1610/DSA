#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public: 

    void solve( TreeNode* root , vector<int>& ans ){

        if( root == NULL ){
            return;
        }

        TreeNode* current = root;
        
        while( current != NULL ){

            if( current -> left == NULL ){
                ans.push_back( current -> val );
                current = current -> right;
            }

            else{

                TreeNode* pred = current -> left;

                while( pred -> right != NULL && pred -> right != current ){
                    pred = pred -> right;
                }

                if( pred -> right == NULL ){
                    pred -> right = current;
                    current = current -> left;
                }

                else{
                    pred -> right = NULL;
                    ans.push_back( current -> val );
                    current = current -> right;
                }

            }

        }

    }

    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        solve( root , ans );
        return ans;

    }

};

*/