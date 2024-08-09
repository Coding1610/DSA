#include<bits/stdc++.h>
using namespace std;

// Node Stucture
class Node{

    public:

    int data;
    Node* left;
    Node* right;

    // Constructor
    Node( int data ){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }

};

// Insertion : Iterative
Node* insertIterative( Node* &root , int data ){

    // Base Case
    if( root == NULL ){
        root = new Node( data );
        return root;
    }

    Node* temp = root;

    while( 1 ){

        // Left Child
        if( data < temp -> data ){
            if( temp -> left == NULL ){
                temp -> left = new Node( data );
                break;
            }
            temp = temp -> left;
        }

        // Right Child
        if( data > temp -> data ){
            if( temp -> right == NULL ){
                temp -> right = new Node( data );
                break;
            }
            temp = temp -> right;
        }

    }

    return root;

}

// Insertion : Recursive
Node* insertRecursion( Node* &root , int data ){

    // Base Case
    if( root == NULL ){
        root = new Node( data );
        return root;
    }

    // Left Child
    if( data < root -> data ){
        root -> left = insertRecursion( root -> left , data );
    }

    // Right Child
    if( data > root -> data ){
        root -> right = insertRecursion( root -> right , data );
    }

    return root;

}

// Predecessor
Node* predecessor( Node* root ){

    Node* temp = root -> left;

    while( temp -> right != NULL && temp -> right != root ){
        temp = temp -> right;
    }

    return temp;

}

// Successor
Node* successor( Node* root ){

    Node* temp = root -> right;

    while( temp -> left != NULL && temp -> left != root ){
        temp = temp -> left;
    }

    return temp;

}

// Deletion : Recursion
Node* Deletion( Node* &root , int data ){

    Node* temp = root;

    // Base Case
    if( temp == NULL ){
        cout << "BST is Empty" << endl;
        return root;
    }

    // Left SubTree
    if( data < temp -> data ){
        root -> left = Deletion( root -> left , data );
    }

    // Right SubTree
    if( data > temp -> data ){
        root -> right = Deletion( root -> right , data );
    }

    // Data Matched
    if( root -> data == data ){

        // 0 Child
        if( root -> left == NULL && root -> right == NULL ){
            delete root;
            return NULL;
        }

        // 1 Child : Right
        else if( root -> left == NULL && root -> right != NULL ){
            temp = root -> right;
            delete root;
            return temp;
        }

        // 1 Child : Left
        else if( root -> left != NULL && root -> right == NULL ){
            temp = root -> left;
            delete root;
            return temp;
        }

        // 2 Child
        else{
            if( root -> left != NULL && root -> right != NULL ){
                Node* succ = successor( root );
                root -> data = succ -> data;
                root -> right = Deletion( root -> right , succ -> data );
            }   
        }

    }

    return root;

}

// Maximum Value
void maxi( Node* root ){

    while( root -> right != NULL ){
        root = root -> right;
    }

    cout << "Maximum value of BST : " << root -> data << endl;

}

//  Minimum Value
void mini( Node* root ){

    while( root -> left != NULL ){
        root = root -> left;
    }

    cout << "Maximum value of BST : " << root -> data << endl;

}

// Inorder Moris Traversal
void inorder( Node* root ){

    Node* curr = root;

    while( curr != NULL ){

        if( curr -> left == NULL ){
            cout << curr -> data << " ";
            curr = curr -> right;
        }

        else{

            Node* pred = predecessor( curr );

            if( pred -> right == NULL ){
                pred -> right = curr;
                curr = curr -> left;
            }

            else{
                pred -> right = NULL;
                cout << curr -> data << " ";
                curr = curr -> right;
            }

        }

    }

}

// Preorder Moris Traversal
void preorder( Node* root ){

    Node* curr = root;

    while( curr != NULL ){

        if( curr -> left == NULL ){
            cout << curr -> data << " ";
            curr = curr -> right;
        }

        else{

            Node* pred = predecessor( curr );

            if( pred -> right == NULL ){
                pred -> right = curr;
                cout << curr -> data << " ";
                curr = curr -> left;
            }

            else{
                pred -> right = NULL;
                curr = curr -> right;
            }

        }

    }

}

// Postorder Moris Traversal
void postorder( Node* root ){

    if( root == NULL ){
        return;
    }
    
    postorder( root -> left );
    postorder( root -> right );
    cout << root -> data << " ";
    
}

// Levelorder Traversal
void levelorder( Node* root ){

    queue <Node*> q;
    q.push( root );
    q.push( NULL );

    while( !q.empty() ){

        Node* front = q.front();
        q.pop();

        if( front == NULL ){

            if( !q.empty() ){
                q.push( NULL );
            }

        }

        else{

            cout << front -> data << " ";

            if( front -> left ){
                q.push( front -> left );
            }

            if( front -> right ){
                q.push( front -> right );
            }

        }

    }

}

int main(){

    Node* root = NULL;

    insertIterative(root,0);
    insertIterative(root,5);
    insertIterative(root,8);
    insertIterative(root,6);
    insertIterative(root,9);
    insertIterative(root,1);
    insertIterative(root,3);
    insertRecursion(root,2);
    insertRecursion(root,4);
    insertRecursion(root,7);
    insertIterative(root,10);

    maxi( root );
    mini( root );

    cout << "Inorder : ";
    inorder( root );

    cout << endl;

    cout << "Preorder : ";
    preorder( root );

    cout << endl;

    cout << "Postorder : ";
    postorder( root );

    cout << endl;

    cout << "Levelorder : ";
    levelorder( root );

    Deletion( root , 5 );

    cout << endl;

    cout << "Levelorder : ";
    levelorder( root );

}