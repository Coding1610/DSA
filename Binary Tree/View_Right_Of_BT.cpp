#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        vector<int> ans;
        vector<int> level;

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

                ans.push_back(level[level.size()-1]);

                if( !q.empty() ){
                    q.push(NULL);
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