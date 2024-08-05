#include<bits/stdc++.h>
using namespace std;

/*

void solveLeft( vector<int>& ans , TreeNode<int>* root ){

    if( (root == NULL) || (!root -> left && !root -> right) ){
        return;
    }

    ans.push_back( root -> data );
    
    if( root -> left ){
        solveLeft( ans , root -> left );
    }

    else{
        solveLeft( ans , root -> right );
    }

}

void solveLeaf( vector<int>& ans , TreeNode<int>* root ){

    if( root == NULL ){
        return;
    }

    if( !root -> left && !root -> right ){
        ans.push_back( root -> data );
    }

    solveLeaf( ans , root -> left );
    solveLeaf( ans , root -> right );

}

void solveRight( vector<int>& ans , TreeNode<int>* root ){

    if( (root == NULL) || (!root -> left && !root -> right) ){
        return;
    }

    if( root -> right ){
        solveRight( ans , root -> right );
    }

    else{
        solveRight( ans , root -> left );
    }

    ans.push_back( root -> data );

}

vector<int> traverseBoundary(TreeNode<int> *root){
    
    vector<int> ans;

    if( root == NULL ){
        return ans;
    }

    ans.push_back( root -> data );

    solveLeft( ans , root -> left );

    solveLeaf( ans , root -> left );
    solveLeaf( ans , root -> right );

    solveRight( ans , root -> right );

    return ans;

}

*/