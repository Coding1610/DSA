#include<bits/stdc++.h>
using namespace std;

/*
 void solve ( string str , string output , int index , vector<string> &ans ){

    if( index  >= str.length() ){
        if( output.length() > 0 ){
            ans.push_back(output);
            return;
        }
    }

    // Exclude - Recursion Call
    solve( str , output , index+1 , ans );

    // Include - Recursion Call
    char element = str[index];
    output.push_back(element);
    solve( str , output , index+1 , ans );
}

vector<string> subseqence(string str){

    string output = "";
    vector<string> ans;
    int index = 0;
    solve( str , output , index , ans);
    return ans;
    
}
*/