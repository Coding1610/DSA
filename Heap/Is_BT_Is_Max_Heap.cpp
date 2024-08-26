#include<bits/stdc++.h>
using namespace std;

/*

int count( BinaryTreeNode<int>* root ){

    if( root == NULL ){
        return 0;
    }

    return 1 + count( root -> left ) + count( root -> right );

}

bool isCBT( BinaryTreeNode<int>* root , int total , int i ){

    if( root == NULL ){
        return true;
    }

    if( i >= total ){
        return false;
    }

    else{
        bool left = isCBT( root -> left , total , 2*i+1 );
        bool right = isCBT( root -> right , total , 2*i+2 );
        return ( left && right );
    }

}

bool isMAX( BinaryTreeNode<int>* root ){

    if( root -> left == NULL && root -> right == NULL ){
        return true;
    }

    if( root -> right == NULL ){
        return (root -> data >= root -> left -> data);
    }

    else{
        bool leftside = isMAX( root -> left );
        bool rightside = isMAX( root -> right );
        return ( leftside && rightside &&  (root -> data >= root -> left -> data && root -> data >= root -> right -> data) );
    }

}

bool isBinaryHeapTree(BinaryTreeNode<int>* root) {

    int index = 0;
    int total = count( root );

    if( isCBT( root , total , index ) && isMAX( root ) ){
        return true;
    }

    else{
        return false;
    }
    
}

*/