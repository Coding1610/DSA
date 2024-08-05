#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public: 

    void solve( TreeNode* root , vector<int> arr , int targetSum , long long int sum , int& count ){

        if( root == NULL ){
            return;
        }

        arr.push_back( root -> val );

        solve( root -> left , arr , targetSum , sum , count );
        solve( root -> right , arr , targetSum , sum , count );

        int n = arr.size();
        
        for( int i = n-1 ; i >= 0 ; i-- ){
            sum += arr[i];
            if( sum == targetSum ){
                count++;
            }
        }

        arr.pop_back();

    }

    int pathSum(TreeNode* root, int targetSum){

        int count = 0;
        vector<int> arr;
        long long int sum = 0;

        solve( root , arr , targetSum , sum , count );

        return count;
        
    }
    
};

*/