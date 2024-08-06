#include<bits/stdc++.h>
using namespace std;

/*

void solve( Node* root , int k , int node , vector<int>& arr , int& ancestor){
    
    if( root == NULL ){
        return;
    }
    
    arr.push_back( root -> data );
    
    solve( root -> left , k , node , arr , ancestor );
    solve( root -> right , k , node , arr , ancestor );
    
    if( root -> data == node ){
        
        int count = 0;
        int n = arr.size();
        
        for( int i = n-1 ; i >= 0 ; i-- ){
            
            if( k < n ){
                
                if( count == k ){
                    ancestor = arr[i];
                }
                
            }
            
            else{
                ancestor = -1;
            }
            
            count++;
            
        }
        
    }
    
    arr.pop_back();
    
}

int kthAncestor(Node *root, int k, int node){
    
    int ancestor; 
    vector<int> arr;
    solve( root , k , node , arr , ancestor);
    return ancestor;
    
}

*/