#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int numberOfSubstrings(string s){

        int left = 0;
        int count = 0;
        int n = s.size();
        unordered_map<char,int> mp;

        for( int right = 0 ; right < n ; right++ ){

            mp[s[right]]++;

            if( mp.size() == 3 ){

                count += (n-right);

                while( right-left+1 >= 3 ){

                    mp[s[left]]--;
                    if( mp[s[left]] == 0 ){
                        mp.erase(s[left]);
                    }
                    if( mp.size() < 3 ){
                        left++;
                        break;
                    }
                    else{
                        left++;
                        count += (n-right);
                    }

                }

            }

        }

        return count;

    }
};

*/