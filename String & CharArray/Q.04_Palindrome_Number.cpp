#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    bool isPalindrome(int x) {

    int reminder = 0;
    long long ans = 0;

    if( x < 0 ){
        return false;
    }
    
    int n = abs(x);

    while( n > 0 ){
        reminder = n%10;
        ans = ans*10 + reminder;
        n = n/10;
    }

    return ( (ans == x) ? true : false );
    }
};
*/