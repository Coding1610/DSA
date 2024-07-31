#include<bits/stdc++.h>
using namespace std;

// Binary Tree Node Structor
class node{

    public:

    int data;
    node* left;
    node* right;

    // Constructor
    node( int data ){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }

};

// Create Binary Tree
node* buildBinaryTree( node* root ){

    cout << "Enter the value of node : " << endl;
    int data;
    cin >> data;

    root = new node( data );

    if( data == -1 ){
        return NULL;
    }

    // Left Children
    cout << "Enter left children of node : " << data << endl;
    root -> left = buildBinaryTree( root -> left );

    // Right Children
    cout << "Enter right children of node : " << data << endl;
    root -> right = buildBinaryTree( root -> right );

    return root;

}

// Levelorder Traversal
void levelOrder( node* root ){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while( !q.empty() ){

        node* temp = q.front();
        q.pop();    

        if( temp == NULL ){
            cout << endl;

            if( !q.empty() ){
                q.push(NULL);
            }

        }

        else{

            cout << temp -> data << " ";

            if( temp -> left ){
                q.push( temp -> left );
            }

            if( temp -> right ){
                q.push( temp -> right );
            }
        }
        
    }

}

// Inorder Traversal
void inOrder( node* root ){

    if( root == NULL ){
        return;
    }

    inOrder( root -> left );
    cout << root -> data << " ";
    inOrder( root -> right );

}

// Preorder Traversal
void preOrder( node* root ){

    if( root == NULL ){
        return;
    }

    cout << root -> data << " ";
    preOrder( root -> left );
    preOrder( root -> right );

}

// Postorder Traversal
void postOrder( node* root ){

    if( root == NULL ){
        return;
    }

    postOrder( root -> left );
    postOrder( root -> right );
    cout << root -> data << " ";

}

int main(){

    node* root = NULL;

    root = buildBinaryTree(root);

    cout << "Inorder : ";
    inOrder( root );

    cout << endl;

    cout << "Preorder : ";
    preOrder( root );

    cout << endl;

    cout << "Postorder : ";
    postOrder( root );

    cout << endl;

    cout << "Levelorder : ";
    levelOrder( root );

}