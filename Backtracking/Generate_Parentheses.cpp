#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    void solve( vector<string>& ans , int leftP , int rightP , int n , string& str ){

        // Base Case
        if( leftP >= n && rightP >= n ){
            ans.push_back(str);
            return;
        }

        // Left : '('
        if( leftP < n ){
            str += '(';
            solve( ans , leftP+1 , rightP , n , str );
            str.pop_back();
        }
        
        // Right : ')'
        if( rightP < leftP ){
            str += ')';
            solve( ans , leftP , rightP+1 , n , str );
            str.pop_back();
        }

    }

    vector<string> generateParenthesis(int n){

        string validP = "";
        vector<string> ans;
        solve( ans , 0 , 0 , n , validP );
        return ans;
        
    }
    
};

*/