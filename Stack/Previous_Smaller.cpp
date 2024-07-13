#include<bits/stdc++.h>
using namespace std;

/*

vector<int> previousSmallerElement(vector<int> &arr, int n){

    vector<int> ans(n);
    stack<int> st;
    
    for( int i = 0 ; i < n ; i++ ){
        
        int ele = arr[i];
        while( !st.empty() && st.top() >= ele ){
            st.pop();
        }
        if( !st.empty() ){
            ans[i] = st.top();
        }
        else{
            ans[i] = -1;
        }
        st.push(ele);
        
    }
    return ans;
}

*/