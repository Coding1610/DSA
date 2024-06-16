#include<bits/stdc++.h>
using namespace std;

/* Optimal

class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours){
        
        long long pairs = 0;
        unordered_map<int, int> count;

        for ( int hour : hours ) {
            int remainder = hour % 24;
            int complement = (24 - remainder) % 24;
            if (count.find(complement) != count.end()) {
                pairs += count[complement];
            }
            count[remainder]++;
        }
        return pairs;
    }
};

*/