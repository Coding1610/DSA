#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    TreeNode* makeBST( vector<int>& pre , vector<int>& in , int& index , int st , int ed , unordered_map<int,int>& mp ){

        if( index >= in.size() || st > ed ){
            return NULL;
        }

        int mid = mp[pre[index]];

        TreeNode* root = new TreeNode( pre[index++] );

        root -> left = makeBST( pre , in , index , st , mid-1 , mp );

        root -> right = makeBST( pre , in , index , mid+1 , ed , mp );

        return root;

    }

    TreeNode* bstFromPreorder(vector<int>& preorder){

        vector<int> pre = preorder;
        sort( preorder.begin() , preorder.end() );
        int index = 0;

        unordered_map<int,int> mp;
        for( int i = 0 ; i < preorder.size() ; i++ ){
            mp[preorder[i]] = i;
        }

        return makeBST( pre , preorder , index , 0 , preorder.size()-1 , mp );
        
    }
};

*/