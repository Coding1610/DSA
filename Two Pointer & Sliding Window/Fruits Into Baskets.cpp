#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int totalFruit(vector<int>& fruits){

        int left = 0;
        int maxLen = 0;
        int n = fruits.size();

        unordered_map<int,int> mp;

        for( int right = 0 ; right < n ; right++ ){

            mp[fruits[right]]++;

            if( mp.size() > 2 ){
                if( mp[fruits[left]] != 0 ){
                    mp[fruits[left]]--;
                }
                if( mp[fruits[left]] == 0 ){
                    mp.erase(fruits[left]);
                }
                left++;
            }

            maxLen = max(maxLen,right-left+1);

        }

        return maxLen;
        
    }
};

*/