#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k){

        if (root == NULL) return -1;

        queue<TreeNode*> q;
        long long int sum = 0;
        vector<long long int> sumArr;

        q.push(root);
        q.push(NULL);

        while( !q.empty() ){

            TreeNode* data = q.front();
            q.pop();
            
            if( data == NULL ){
                sumArr.push_back(sum);
                if (!q.empty()) q.push(NULL);
                sum = 0;
            }

            else{
                sum += data -> val;
                if (data -> left) q.push(data -> left);   
                if (data -> right) q.push(data -> right);
            }

        }

        sort( sumArr.begin() , sumArr.end() , greater<long long int>() );

        return ( k > sumArr.size() ? -1 : sumArr[k-1] );

    }
};

*/