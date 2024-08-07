#include<bits/stdc++.h>
using namespace std;

/*

BinaryTreeNode<int>* findNode( map<BinaryTreeNode<int>*,BinaryTreeNode<int>*>& mp , int start , BinaryTreeNode<int>* root ){

    BinaryTreeNode<int>* target = NULL; 
    queue<BinaryTreeNode<int>*> q;
    q.push( root );
     
    mp[root] = NULL;

    while( !q.empty() ){

        BinaryTreeNode<int>* front = q.front();
        q.pop();

        if( front -> data == start ){
            target = front;
        }

        if( front -> left ){
            mp[front -> left] = front;
            q.push( front -> left );
        }

        if( front -> right ){
            mp[front -> right] = front;
            q.push( front -> right );
        }

    }

    return target;

}

int burnTree( BinaryTreeNode<int>* root , map<BinaryTreeNode<int>*,BinaryTreeNode<int>*>& mp ){

    int time = 0;
    map<BinaryTreeNode<int>*,bool> visited;

    queue<BinaryTreeNode<int>*> q;
    q.push( root );
    visited[root] = 1;

    while( !q.empty() ){

        bool flag = 0;
        int size = q.size();

        for( int i = 0 ; i < size ; i++ ){

            BinaryTreeNode<int>* front = q.front();
            q.pop();

            if( front -> left && !visited[front -> left] ){
                flag = 1;
                q.push( front -> left );
                visited[ front -> left ] = 1;
            }

            if( front -> right && !visited[front -> right] ){
                flag = 1;
                q.push( front -> right );
                visited[ front -> right ] = 1;
            }

            if( mp[front] && !visited[mp[front]] ){
                flag = 1;
                q.push( mp[front] );
                visited[mp[front]] = 1;
            }

        }

        if( flag == 1){
            time++;
        }

    }

    return time;

}

int timeToBurnTree(BinaryTreeNode<int>* root, int start){

    // Step 1 : Create Node to Parent Mapping & return Target Node
    map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> mp;
    BinaryTreeNode<int>* targetNode = findNode( mp , start , root );
    
    // Step 2 : Burn Tree 
    int ans = burnTree( targetNode , mp );
    return ans;

}

*/