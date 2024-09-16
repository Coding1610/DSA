#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int findMinDifference(vector<string>& timePoints){

        vector<int> ans;

        for( int i = 0 ; i < timePoints.size() ; i++ ){

            int hour = stoi(timePoints[i].substr(0,2));
            int mint = stoi(timePoints[i].substr(3,2));
            ans.push_back(((hour*60)+mint));

        }

        sort( ans.begin() , ans.end() );

        int mini = INT_MAX;

        for( int i = 1 ; i < ans.size() ; i++ ){
            mini = min(mini,ans[i]-ans[i-1]);
        }

        int wrapAroundDiff = (1440 - ans.back()) + ans[0];
        mini = min(mini, wrapAroundDiff);

        return mini;
        
    }
    
};

*/