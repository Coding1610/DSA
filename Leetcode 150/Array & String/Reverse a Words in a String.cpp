#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    string reverseWords(string s){

        vector<string> arr;

        for( int i = 0 ; i < s.size() ; i++ ){
            if( s[i] != ' ' ){
                string temp = "";
                while( i < s.size() && s[i] != ' ' ){
                    temp += s[i];
                    i++;
                }
                arr.push_back(temp);
            }
        }

        string reverseString = "";

        for( int i = arr.size()-1 ; i >= 0 ; i-- ){
            reverseString += arr[i];
            reverseString += " ";
        }

        reverseString.erase(reverseString.size()-1);

        return reverseString;
        
    }
};

*/