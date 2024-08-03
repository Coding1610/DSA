#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public: 

    void solve( TreeNode* root , vector<int> path , vector<vector<int>>& paths , int sum , int targetSum ){

        if( root == NULL ){
            return;
        }

        sum += root -> val;
        path.push_back( root -> val );

        if( !root -> left && !root -> right ){
            if( sum == targetSum ){
                paths.push_back(path);
            }
            else{
                return;
            }
        }

        solve( root -> left , path , paths , sum , targetSum );
        solve( root -> right , path , paths , sum , targetSum );

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        int sum = 0;
        vector<int> path;
        vector<vector<int>> paths;
        solve( root , path , paths , sum , targetSum );
        return paths;

    }

};

*/