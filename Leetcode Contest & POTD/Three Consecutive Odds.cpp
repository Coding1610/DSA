#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr){

        int n = arr.size();
        
        if( n == 0 || n == 1 || n == 2 ){
            return false;
        }

        else{
            for( int i = 0 ; i <= n-3 ; i++ ){
                if( (arr[i]&1) == 1 && (arr[i+1]&1) == 1 && (arr[i+2]&1) == 1 ){
                    return true;
                }
            }
        }

        return false;
    
    }
};

*/