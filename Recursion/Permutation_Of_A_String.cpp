#include<bits/stdc++.h>
using namespace std;

/*
void solve( vector<string>& ans , string str , int index ){

    // Base Case
    if( index >= str.length() ){
        ans.push_back(str);
        return;
    }

    for( int j = index ; j < str.length() ; j++ ){

        swap(str[index],str[j]);
        // Recursion Call
        solve( ans , str , index+1 );
        // Back Track
        swap(str[index],str[j]);
    }

}

vector<string> generatePermutations(string &str){

    int index = 0;
    vector<string> ans;
    
    solve( ans , str , index );

    sort(ans.begin(),ans.end());
    return ans;

}
*/