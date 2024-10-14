#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k){

        long long int score = 0;

        priority_queue<int> pq;

        for( int x : nums ){
            pq.push(x);
        }

        while( k-- ){
            int val = pq.top();
            pq.pop();
            score += val;
            if( val % 3 == 0 ) pq.push( val / 3 );
            else pq.push( ( val / 3 ) + 1 );
        }
        
        return score;

    }
};

*/