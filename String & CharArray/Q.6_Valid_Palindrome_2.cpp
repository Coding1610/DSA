#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:

    bool isSame( string s ){

        int i = 0;
        int j = s.length()-1;
        while( i <= j ){
            if( s[i] != s[j] ){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {

        if( isSame(s)){
            return true;
        }

        int i = 0;
        int j = s.length()-1;
        string one = s;
        string two = s;

        while( i <= j ){

            if( s[i] != s[j] ){

                one.erase(one.begin()+i);
                two.erase(two.begin()+j);

                if( isSame(one) ){
                    return true;
                }
                else if( isSame(two) ){
                    return true;
                }
                else{
                    return false;
                }
            }
            i++;
            j--;
        }
        return false;    
    }
};
*/