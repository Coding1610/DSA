#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    long long dividePlayers(vector<int>& skill){

        int n = skill.size();

        if (n <= 1) return -1;

        long long int totalSkill = 0;

        sort( skill.begin() , skill.end() );

        int firstPair = skill[0] + skill[n-1];

        for( int i = 0 ; i < n/2 ; i++ ){
            int currPair = skill[i] + skill[n-i-1];
            if( currPair != firstPair ) return -1;
            totalSkill += skill[i] * skill[n-i-1];
        }

        return totalSkill;
        
    }
};

*/