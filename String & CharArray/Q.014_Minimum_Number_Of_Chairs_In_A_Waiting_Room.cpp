#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int minimumChairs(string s) {

        int waitChair = 0;
        int ans = -1;

        for( int i = 0 ; i < s.length() ; i++ ){

            if( s[i] == 'E' ){
                waitChair += 1;
            }
            else{
                waitChair -= 1;
            }
            ans = max(ans,waitChair);
        }
        return ans;
    }
};
*/