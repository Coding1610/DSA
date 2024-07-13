#include<bits/stdc++.h>
using namespace std;

/*

vector<int> solveNEXT( vector<int>& arr , int n ){

    stack<int> st;
    vector<int> nums(n);

    for( int i = n-1 ; i >= 0 ; i-- ){
        
        int ele = arr[i];

        while( !st.empty() && arr[st.top()] >= ele ){
            st.pop();
        }

        if( !st.empty() ){
            nums[i] = st.top();
        }

        else{
            nums[i] = n;
        }

        st.push(i);

    }

    return nums;

}

vector<int> solvePRE( vector<int>& arr , int n ){

    stack<int> st;
    vector<int> nums(n);

    for( int i = 0 ; i < n ; i++ ){
        
        int ele = arr[i];

        while( !st.empty() && arr[st.top()] >= ele ){
            st.pop();
        }

        if( !st.empty() ){
            nums[i] = st.top();
        }

        else{
            nums[i] = -1;
        }

        st.push(i);

    }

    return nums;

}

int largestRectangle(vector < int > & heights){

    int n = heights.size();

    vector<int> next = solveNEXT( heights , n );

    vector<int> pre = solvePRE( heights , n );

    int area = INT_MIN;

    for( int i = 0 ; i < n ; i++ ){

        int l = heights[i];
        int b = next[i]-pre[i]-1;
        int newArea = l*b;
        area = max( area , newArea );

    }   
    
    return area;

}

*/