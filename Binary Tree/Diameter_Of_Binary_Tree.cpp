#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int solve( TreeNode* root , int& d ){

        if( root == NULL ){
            return 0;
        }
        
        int left = solve( root -> left , d );
        int right = solve( root -> right , d );

        int ld = left + right;
        d = max( d , ld );

        return 1 + max( left , right );

    }

    int diameterOfBinaryTree(TreeNode* root) {

        int diameter = 0;
        solve( root , diameter );
        return diameter;

    }
};

*/