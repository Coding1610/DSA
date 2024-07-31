#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<int> level;
        vector<vector<int>> ans;

        if( root == NULL ){
            return ans;
        }

        queue<TreeNode*> q;

        q.push( root );
        q.push( NULL );

        while( !q.empty() ){

            TreeNode* temp = q.front();
            q.pop();

            if( temp == NULL ){

                ans.push_back(level);
                level.clear();

                if( !q.empty() ){
                    q.push( NULL );
                }

            }

            else{

                level.push_back( temp -> val );

                if( temp -> left ){
                    q.push( temp -> left );
                }

                if( temp -> right ){
                    q.push( temp -> right );
                }

            }
        }

        return ans;
        
    }
};

*/