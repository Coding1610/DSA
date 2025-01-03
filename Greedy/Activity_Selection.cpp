/*

class Solution {
public:

    static bool cmp( vector<int>&v1, vector<int>&v2 ){
        return v1[1] < v2[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals){
        
        int s = 0;
        int res = 1;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),cmp);
        
        for( int i = 1 ; i < n ; i++ ){
            if( intervals[s][1] <= intervals[i][0] ){
                s = i;
                res++;
            }
        }
        
        return n-res;

    }
    
};

*/