#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void solve( TreeNode* root ){

        if( root == NULL ) return;

        TreeNode* temp = root -> left;
        root -> left = root -> right;
        root -> right = temp;

        invertTree( root -> left );
        invertTree( root -> right );

    }

    TreeNode* invertTree(TreeNode* root) {

        solve( root );
        return root; 
        
    }
    
};

*/