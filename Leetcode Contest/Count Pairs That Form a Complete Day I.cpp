#include<bits/stdc++.h>
using namespace std;

/* Brute Force

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        
        int count = 0;
        long long int sum = 0;
        for( int i = 0 ; i < hours.size()-1 ; i++ ){
            for( int j = i+1 ; j < hours.size() ; j++ ){
                sum = hours[i]+hours[j];
                if( (sum%24 == 0) ){
                    count += 1;
                }
            }
        }
        return count;
    }
};

*/