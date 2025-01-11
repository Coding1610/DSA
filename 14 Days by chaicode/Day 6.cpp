#include<bits/stdc++.h>
using namespace std;

bool isPlaindrome( string& s , int left , int right ){

    while( left < right ){
        if( s[left] != s[right] ){
            return false;
        }
        left++;
        right--;
    }

    // palindrome after removing one character
    return true;

}

bool canBePalindrome(string s) {

    int left = 0;
    int right = s.length()-1;

    while( left < right ){

        // step 1 : if not same then check by removing either left or right character
        if( s[left] != s[right] ){
            // step 2 : function call
            return isPlaindrome(s, left+1, right) || isPlaindrome(s, left, right-1 );
        }
        // step 3 : same then increase both pointer
        left++;
        right--;
    }

    // step 4 : already palindrome
    return true;

}

int main() {
    string s;
    cin >> s; 
    // please don't modify the main function
    cout << (canBePalindrome(s) ? "YES" : "NO");
    return 0;
}