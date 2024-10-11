#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int smallestChair(vector<vector<int>>& times, int targetFriend){

        int n = times.size();

        vector<pair<pair<int,int>,int>> arr1;
        
        for( int i = 0 ; i < n ; i++ ){
            arr1.push_back({{times[i][0],1},i});
            arr1.push_back({{times[i][1],-1},i});
        }

        sort( arr1.begin() , arr1.end() );

        vector<int> arr2(n,-1);

        priority_queue<int,vector<int>,greater<int>> chairs;

        for( int i = 0 ; i < n ; i++ ){
            chairs.push(i);
        }

        for( auto& x : arr1 ){

            int time = x.first.first;
            int type = x.first.second;
            int person = x.second;

            if( person == targetFriend && type == 1 ){
                return chairs.top();
            } 

            if( type == 1 ){
                arr2[person] = chairs.top();
                chairs.pop();
            }

            else{
                chairs.push( arr2[person] );
                arr2[person] = -1;
            }

        }

        return -1;
        
    }

};

*/