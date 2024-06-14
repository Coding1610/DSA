#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:

    void solve( string digits , int index , string output , vector<string>& ans , string mapping[] ){

        // Base Case
        if( index >= digits.length() ){
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for( int i = 0 ; i < value.length() ; i++ ){

            output.push_back(value[i]);
            // Recursion Call
            solve( digits , index+1 , output , ans , mapping );
            output.pop_back();

        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if( digits == "" ){
            return ans;
        }

        string output = "";
        int index = 0;

        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve( digits , index , output , ans , mapping );
        return ans;
    }
};
*/