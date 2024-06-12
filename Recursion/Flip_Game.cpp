#include<bits/stdc++.h>
using namespace std;

/*
bool canNinjaWin(string& str){

    // Base Case
    if( str.length() < 2 ){
        return false;
    }

    for( int i = 0 ; i < str.length()-1 ; i++ ){

        if( str[i] == '$' && str[i+1] == '$' ){

            string changed_str = str.substr(0,i) + "**" + str.substr(i+2);

            // Recursion Call
            if(canNinjaWin(changed_str) == false) {  
                return true;
            }
        }
    }
    return false;
}
*/