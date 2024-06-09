#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int valueAfterKSeconds(int n, int k) {

        vector<int>arr(n,1);

        int i = 0;
        while( i != k ){
            
            for( int i = 1 ; i < n ; i++ ){
                arr[i] = (arr[i] + arr[i-1])%1000000007;
            }
            i++;
        }

        return (arr[n-1]);
        
    }
};
*/