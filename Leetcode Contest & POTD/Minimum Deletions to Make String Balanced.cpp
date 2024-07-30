#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int minimumDeletions(string s) {

        int n = s.size();
        vector<int> a(n);
        vector<int> b(n);

        a[0] = 0;
        for( int i = 1 ; i < n ; i++ ){
            int temp = 0;
            if( s[i-1] == 'b' ){
                temp = 1;
            }
            a[i] = a[i-1] + temp;
        }

        b[n-1] = 0;
        for( int i = n-2 ; i >= 0 ; i-- ){
            int temp = 0;
            if( s[i+1] == 'a' ){
                temp = 1;
            }
            b[i] = b[i+1] + temp;
        }

        int mini = INT_MAX;
        for( int i = 0 ; i < n ; i++ ){
            mini = min( (a[i]+b[i]) , mini );
        }

        return mini;
        
    }
};

*/