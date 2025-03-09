#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int romanToInt(string s){

        unordered_map<char,int> mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = 0;

        for( int i = s.size() - 1; i >= 0; i-- ){
            if( i > 0 && ( (s[i] == 'X' && s[i-1] == 'I') ||
                           (s[i] == 'V' && s[i-1] == 'I') ||
                           (s[i] == 'L' && s[i-1] == 'X') ||
                           (s[i] == 'C' && s[i-1] == 'X') ||
                           (s[i] == 'M' && s[i-1] == 'C') ||
                           (s[i] == 'D' && s[i-1] == 'C'))) {
                ans += (mp[s[i]] - mp[s[i-1]]);
                i--;
            } 
            else {
                ans += mp[s[i]];
            }
        }

        return ans;
        
    }
};

*/