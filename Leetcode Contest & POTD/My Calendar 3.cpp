#include<bits/stdc++.h>
using namespace std;

/*

class MyCalendarThree {
public:
    
    multiset<pair<int,int>> mst;

    MyCalendarThree() {}
    
    int book(int startTime, int endTime) {

        mst.insert({endTime,0});
        mst.insert({startTime,1});

        int ans = 0;
        int curr = 0;

        for( auto it : mst ){

            if( it.second == 1 ){
                curr++;
                ans = max(ans,curr);
            }

            else{
                curr--;
            }
            
        }

        return ans;

    }
};

*/