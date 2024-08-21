#include<bits/stdc++.h>
using namespace std;

/*

void inorder( binaryTreeNode* root , vector<int>& ans ){

    if( root == NULL ){
        return;
    }

    binaryTreeNode* curr = root;

    while( curr != NULL ){

        if( curr -> left == NULL ){
            ans.push_back( curr -> data );
            curr = curr -> right;
        }

        else{

            binaryTreeNode* pred = curr -> left;

            while( pred -> right != NULL && pred -> right != curr ){
                pred = pred -> right;
            }

            if( pred -> right == NULL ){
                pred -> right = curr;
                curr = curr -> left;
            }

            else{
                pred -> right = NULL;
                ans.push_back( curr -> data );
                curr = curr -> right;
            }
            
        }
    }
}

vector<int> findPreSuc(binaryTreeNode *root, int key){

	vector<int> ans;
	inorder( root , ans );	
	int n = ans.size();

	vector<int> PS;
	int index;

	for( int i = 0 ; i < n ; i++ ){
		if( ans[i] == key ){
			index = i;
		}
	}

	// Predecessor
	if( index-1 >= 0 ){
		PS.push_back( ans[index-1] );
	}
	else{
		PS.push_back(-1);
	}

	// Successor
	if( index+1 < n ){
		PS.push_back( ans[index+1] );
	}
	else{
		PS.push_back(-1);
	}

	return PS;

}

*/