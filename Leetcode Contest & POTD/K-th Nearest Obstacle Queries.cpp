#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {

        vector<int> results;
        priority_queue<int> maxHeap;
        
        for( const auto& query : queries ){
            
            int x = query[0];
            int y = query[1];
            int distance = abs(x) + abs(y);

            maxHeap.push(distance);

            if( maxHeap.size() > k ){
                maxHeap.pop();
            }
            
            results.push_back( maxHeap.size() < k ? -1 : maxHeap.top() );

        }

        return results;

    }
};

*/