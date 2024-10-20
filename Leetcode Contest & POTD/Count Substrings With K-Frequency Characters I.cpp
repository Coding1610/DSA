#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int numberOfSubstrings(string s, int k) {

        int ans = 0;
        int n = s.size();
        
        for( int i = 0 ; i < n ; i++ ){
            vector<int> freq(26);
            for( int j = i ; j < n ; j++ ){
                freq[s[j]-'a']++;
                int maxi = 0;
                for( int k = 0 ; k < 26 ; k++ ) if( freq[k] > maxi ) maxi = freq[k];
                if( maxi >= k ) ans++;
            }
        }

        return ans;

    }
};

*/