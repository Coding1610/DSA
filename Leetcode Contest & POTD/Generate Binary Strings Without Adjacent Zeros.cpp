#include<bits/stdc++.h>
using namespace std;

/* 

class Solution {
public:
    void solve( int n , vector<string> &ans , string str ){

        if( n == 0 ){
            ans.push_back(str);
            return;
        }

        if( str.empty() || str.back() == '1' ){
            solve( n-1 , ans , str+'0');
        }
        
        solve( n-1 , ans , str+'1');

    }

    vector<string> validStrings(int n){

        vector<string> ans;
        solve( n , ans , "" );
        return ans;
        
    }
};

*/