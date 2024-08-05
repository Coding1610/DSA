#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int maxLevelSum(TreeNode* root) {

        if( root == NULL ){
            return 0;
        }

        int i = 1;
        int sum = 0;

        map<int,int> mp;

        queue<TreeNode*> q;

        q.push( root );
        q.push( NULL );

        while( !q.empty() ){

            TreeNode* temp = q.front();
            q.pop();

            if( temp == NULL ){

                mp[i++] = sum;
                sum = 0;

                if( !q.empty() ){
                    q.push( NULL );
                }

            }

            else{   

                sum += temp -> val;

                if( temp -> left ){
                    q.push( temp -> left );
                }

                if( temp -> right ){
                    q.push( temp -> right );
                }

            }

        }   

        int maxSum = INT_MIN;
        int level = 0;

        for( auto i : mp ){
            if( i.second > maxSum ){
                maxSum = i.second;
                level = i.first;
            }
        }

        return level;
        
    }
};

*/