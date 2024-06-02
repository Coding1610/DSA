#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;
        int idx = 0;
        int n = chars.size();

        while( i < n ){

            int j = i+1;

            while( j < n && chars[i] == chars[j] ){
                j++;
            }

            chars[idx++] = chars[i];
            int count = j-i;

            if( count > 1 ){
                string s = to_string(count);
                for( char ch : s ){
                    chars[idx++] = ch;
                }
            }
            i=j;
        }
        return idx;
    }
};
*/