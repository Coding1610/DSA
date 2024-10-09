#include<bits/stdc++.h>
using namespace std;

/*

// Brute Force

class Solution {
public:

    void solve( string str , int n , vector<string>& ans ){

        if( n == 0 ){
            ans.push_back(str);
            return;
        }
    
        solve( str+"0" , n-1 , ans );

        solve( str+"1" , n-1 , ans );

    }

    string findDifferentBinaryString(vector<string>& nums){

        string str = "";
        vector<string> ans;
        int n = nums.size();
        solve( str , n , ans );

        for( int i = 0 ; i < nums.size() ; i++ ){
            for( int j = 0 ; j < ans.size() ; j++ ){
                if( nums[i] == ans[j] ){
                    auto pos = ans.begin()+j;
                    ans.erase(pos);
                }
            }
        }

        return ans[0];

    }

};

// Optimal

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

        string ans = "";

        for( int i = 0 ; i < nums.size() ; i++ ) ans += nums[i][i] =='0' ? '1' : '0';

        return ans;

    }
};

*/