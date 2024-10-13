#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    pair<bool,int> makeTree( TreeNode* root , vector<int>& ans ){

        if( root == NULL ){
            return {true,0};
        }

        pair<bool,int> left = makeTree( root -> left , ans );
        pair<bool,int> right = makeTree( root -> right , ans );

        if( left.first && right.first && left.second == right.second ){
            int size = left.second + right.second + 1;
            ans.push_back( size );
            return {true,size};
        }

        return {false,0};

    }

    int kthLargestPerfectSubtree(TreeNode* root, int k){

        if( root == NULL ){
            return -1;
        }

        vector<int> ans;

        makeTree( root , ans );
        
        sort( ans.begin() , ans.end() , greater<int>() );

        if( ans.size() >= k ){
            return ans[k-1];
        }

        return -1;
        
    }
    
};

*/