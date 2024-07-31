#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    TreeNode* createTree( vector<int>& pre , vector<int>& in , int &index , int st , int ed , unordered_map<int,int>& mp ){

        if( index >= pre.size() || st > ed ){
            return NULL;
        }

        int mid = mp[pre[index]];

        TreeNode* root = new TreeNode( pre[index++] );

        root -> left = createTree( pre , in , index , st , mid-1 , mp );

        root -> right = createTree( pre , in , index , mid+1 , ed , mp );

        return root;

    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        unordered_map<int,int> mp;

        for( int i = 0 ; i < inorder.size() ; i++ ){
            mp[inorder[i]] = i;
        }

        int index = 0;

        return createTree( preorder , inorder , index , 0 , inorder.size()-1 , mp );
        
    }
};

*/