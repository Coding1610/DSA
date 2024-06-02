#include<bits/stdc++.h>
using namespace std;

/*
bool checkPalindrome(string s) {

    int q = 0;
    int p = s.length()-1;

    while (q < p) {

        while( q < p && (s[q] < '0' || (s[q] > '9' && s[q] < 'A') || (s[q] > 'Z' && s[q] < 'a') || s[q] > 'z') ){
            q++;
        }

        while( q < p && (s[p] < '0' || (s[p] > '9' && s[p] < 'A') || (s[p] > 'Z' && s[p] < 'a') || s[p] > 'z') ){
            p--;
        }

        if( toupper(s[q]) != toupper(s[p]) ){
            return false;
        }

        q++;
        p--;    
    }

    return true;
}
*/