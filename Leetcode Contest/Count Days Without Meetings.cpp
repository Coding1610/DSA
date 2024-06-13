#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        
         vector<pair<int, int>> mergedMeetings;

        sort(meetings.begin(), meetings.end());
        
        for (const auto& meeting : meetings){
            if ( !mergedMeetings.empty() && mergedMeetings.back().second >= meeting.front() - 1 ){
                mergedMeetings.back().second = max(mergedMeetings.back().second, meeting.back());
            } 
            else{
                mergedMeetings.push_back({meeting.front(), meeting.back()});
            }
        }

        int busyDays = 0;
        for (const auto& meeting : mergedMeetings) {
            busyDays += (meeting.second - meeting.first + 1);
        }

        return days - busyDays;
    }
};
*/