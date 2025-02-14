#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int minOperations(vector<int>& nums, int k){
        
        int minOp = 0;
        priority_queue<long, vector<long>, greater<long>> pq;

        for( int num : nums ){
            pq.push(num);
        }

        while( pq.size() > 1 && pq.top() < k ){

            long long x = pq.top();
            pq.pop();

            long long y = pq.top();
            pq.pop();

            long long z = (min(x,y)*2) + max(x,y);

            pq.push(z);
            minOp++;

        }

        return minOp;

    }
};

*/