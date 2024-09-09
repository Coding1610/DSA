#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    string stringHash(string s, int k){

        int n = s.size();

        s += '*';
        string ans = "";

        int count = 0;
        int index = 0;

        for( int i = 0 ; i <= n ; i++ ){

            if( count == k ){

                int pt = index%26;
                char ch = 'a'+pt;
                ans += ch;
                count = 0;
                index = 0;

            }

            index += s[i]-'a';
            count++;

        }

        return ans;

    }
    
};

*/