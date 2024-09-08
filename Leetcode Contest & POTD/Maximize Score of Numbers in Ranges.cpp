#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    bool check( vector<int> a , int mid , int d ){

        for( int i = 1 ; i < a.size() ; i++ ){

            if( a[i]-a[i-1] >= mid ){
                continue;
            }

            else{
                if( a[i]+d-a[i-1] < mid ){
                    return false;
                }
                a[i] = a[i-1]+mid;
            }

        }

        return true;
    }
    
    int maxPossibleScore(vector<int>& start, int d){

        int ans = -1;
        long long int l = 0;
        long long int r = INT_MAX;

        sort( start.begin() , start.end() );

        while( l <= r ){

            int mid = (l+r)>>1;

            if( check(start,mid,d) ){
                ans = mid;
                l = mid+1;
            }

            else{
                r = mid-1;
            }

        }

        return ans;
        
    }
    
};

*/