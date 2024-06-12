#include<bits/stdc++.h>
using namespace std;

/* Recursion : TLE

class Solution {
public:

    int solve( vector<int>& arr , int s , int e ){

        // Base Case
        if( arr.size() == 1 ){
            return arr[s];
        }

        for (auto it = arr.begin(); it != arr.end();) {
            it = arr.erase(it);
            if (it != arr.end()) {
                ++it;
            }
        }
        
        reverse(arr.begin(),arr.end());

        // Recursion Call
        return solve( arr , s , arr.size()-1 );

    }

    int lastRemaining(int n){

        if( n == 1 ){
            return 1;
        }

        vector<int> arr(n);
        for( int i = 0 ; i < n ; i++ ){
            arr[i] = i+1;
        }

        return solve( arr , 0 , n-1 );
    }
};
*/

/* Normal

class Solution {
public:
    int lastRemaining(int n){

        if( n == 1 ){
            return 1;
        }

        int ans = 1;
        int ord = 1;
        bool left = true;
        int remain = n;

        while( remain > 1 ){

            if( left == true || (remain % 2) == 1 ){
                ans = ans + ord;
            }

            ord = ord * 2;
            remain = remain/2;
            left = !left;
        }
        return ans;      
    }
};
*/