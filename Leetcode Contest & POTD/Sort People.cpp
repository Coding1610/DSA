#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights){

        int n = names.size();

        vector<string> sortedPeople;     

        map<int,string,greater<int>> store;

        for( int i = 0 ; i < n ; i++ ){
            store[heights[i]] = names[i];
        }

        for( auto it : store ){
            sortedPeople.push_back(it.second);
        } 

        return sortedPeople;

    }
};

*/