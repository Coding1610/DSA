#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){

        stack<int> st;
        unordered_map<int,int> mapp;

        for( int i = nums2.size()-1 ; i >= 0 ; i-- ){

            int ele = nums2[i];

            while( !st.empty() && st.top() < ele ){
                st.pop();
            }

            if( !st.empty() ){
                mapp[ele] = st.top();
            }

            else{
                mapp[ele] = -1;
            }

            st.push(ele);
            
        }

        for( int i = 0 ; i < nums1.size() ; i++ ){
            nums1[i] = mapp[nums1[i]];
        }

        return nums1;
        
    }
};

*/