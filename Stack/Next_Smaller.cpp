#include<bits/stdc++.h>
using namespace std;

/*

vector<int> nextSmallerElement(vector<int> &arr, int n){

    vector<int> ans(n);
    stack<int> st;
    
    for( int i = n-1 ; i >=0 ; i-- ){
        
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