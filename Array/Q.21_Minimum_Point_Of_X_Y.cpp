#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {

        int index = -1;
        int newDis = INT_MAX;

        for( int i = 0 ; i < points.size() ; i++ ){

            int a = points[i][0];
            int b = points[i][1];
            if( a == x || b == y ){
                int currDis = abs(x-a)+abs(y-b);
                if( currDis < newDis ){
                    index = i;
                    newDis = currDis;
                }
            }
        }
        return index;
    }
};
*/