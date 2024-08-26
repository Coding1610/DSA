#include<bits/stdc++.h>
using namespace std;

/*

void solve( BinaryTreeNode* root , vector<int>& arr ){

	if( root == NULL ){
		return;
	}

	BinaryTreeNode* curr = root;

	while( curr != NULL ){

		if( !curr -> left ){
			arr.push_back( curr -> data );
			curr = curr -> right;
		}

		else{

			BinaryTreeNode* pred = curr -> left;

			while( pred -> right != NULL && pred -> right != curr ){
				pred = pred -> right;
			}

			if( pred -> right == NULL ){
				pred -> right = curr;
				curr = curr -> left;
			}

			else{
				pred -> right = NULL;
				arr.push_back( curr -> data );
				curr = curr -> right;
			}

		}

	}

}

void makeTree( BinaryTreeNode* root , vector<int>& arr , int& i ){

	if( root == NULL ){
		return;
	}

	root -> data = arr[i++];

	makeTree( root -> left , arr , i );
	makeTree( root -> right , arr , i );
	
}

BinaryTreeNode* convertBST(BinaryTreeNode* root){

	vector<int> arr;
	solve( root , arr );

	int i = 0;

	makeTree( root , arr , i );

	return root;

}

*/