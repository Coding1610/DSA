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

    bool findTarget(TreeNode* root, int k) {

        vector<int> inorder;
        solve( root , inorder );

        if( inorder.size() == 1 ){
            return false;
        }

        int i = 0;
        int j = inorder.size()-1;

        while( i < j ){

            int sum = inorder[i]+inorder[j];

            if( sum == k ){
                return true;
            }

            else if( sum < k ){
                i++;
            }

            else{
                j--;
            }

        }

        return false;

    }

};

*/