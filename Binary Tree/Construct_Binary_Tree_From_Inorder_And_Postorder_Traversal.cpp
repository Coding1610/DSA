#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    TreeNode* createTree( vector<int> &in , vector<int> &po , int &idx , int st , int ed , unordered_map<int,int> &mymap ){

        if( idx < 0 || st > ed ){
            return NULL;
        }
        
        int mid = mymap[po[idx]];
        
        TreeNode* root = new TreeNode( po[idx--] );
        
        root -> right = createTree( in , po , idx , mid+1 , ed , mymap );
        
        root -> left = createTree( in , po , idx , st , mid-1 , mymap );
        
        return root;

    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        unordered_map<int,int> mymap;
        
        for( int i = 0 ; i < inorder.size() ; i++ ){
            mymap[inorder[i]] = i;
        }
        
        int idx = postorder.size()-1;
        
        return createTree( inorder , postorder , idx , 0 , inorder.size()-1 , mymap );
        
    }
};

*/