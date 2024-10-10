#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int maxWidthRamp(vector<int>& nums){

        int ans = 0;
        stack<int> st;
        int n = nums.size();

        // Phase : 1
        for( int i = 0 ; i < n ; i++ ){
            if( st.empty() || nums[st.top()] > nums[i] ){
                st.push(i);
            }
        }

        // Phase : 2
        for( int i = n-1 ; i >= 0 ; i-- ){  
            while( !st.empty() && nums[i] >= nums[st.top()] ){
                ans = max(ans,(i-st.top()));
                st.pop();
            }
        }

        return ans;

    }

};

*/