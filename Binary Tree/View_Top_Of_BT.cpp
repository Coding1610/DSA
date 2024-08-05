#include<bits/stdc++.h>
using namespace std;

/*

vector<int> getTopView(TreeNode<int> *root){
    
    vector<int> ans;

    if( root == NULL ){
        return ans;
    }

    map<int,int> mp;

    queue<pair<TreeNode<int>*,int>> q;

    q.push( make_pair( root , 0 ) );

    while( !q.empty() ){

        pair<TreeNode<int>*,int> temp = q.front();
        q.pop();

        TreeNode<int>* front = temp.first;
        int hd = temp.second;

        if( mp.find(hd) == mp.end() ){
            mp[hd] = front -> data;
        }

        if( front -> left ){
            q.push( make_pair( front -> left , hd-1 ) );
        }

        if( front -> right ){
            q.push( make_pair( front -> right , hd+1 ) );
        }

    }

    for( auto i : mp ){
        ans.push_back( i.second );
    }

    return ans;

}

*/