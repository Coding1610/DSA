#include<bits/stdc++.h>
using namespace std;

/*

void inorder( TreeNode<int>* root , vector<int>& ans ){

    if( root == NULL ){
        return;
    }

    TreeNode<int>* current = root;
        
    while( current != NULL ){

        if( current -> left == NULL ){
            ans.push_back( current -> data );
            current = current -> right;
        }

        else{

            TreeNode<int>* pred = current -> left;

            while( pred -> right != NULL && pred -> right != current ){
                pred = pred -> right;
            }

            if( pred -> right == NULL ){
                pred -> right = current;
                current = current -> left;
            }

            else{
                pred -> right = NULL;
                ans.push_back( current -> data );
                current = current -> right;
            }

        }

    }

}

TreeNode<int>* solve( vector<int> ans , int s , int e ){
    
    if(s > e) {
        return NULL;
    }

    int mid = (s+e)/2;

    TreeNode<int>* newNode = new TreeNode<int>(ans[mid]);

    newNode -> left = solve(ans, s, mid - 1);

    newNode -> right = solve(ans, mid + 1, e); 

    return newNode;

}

TreeNode<int>* balancedBst( TreeNode<int>* root ){
    
    vector<int> ans;
    inorder( root , ans );
    int n = ans.size();
    return solve( ans , 0 , n-1 );

}

*/