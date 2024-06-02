#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int maxPower(string s) {

        int ans = 1;
        char temp = s[0];
        int count = 1;

        for( int i = 1 ; i < s.length() ; i++ ){

            if( s[i] == temp ){
                count++;
            }
            else{
                temp = s[i];
                count = 1;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};
*/