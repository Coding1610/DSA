#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices){

        int n = prices.size();
        vector<int> discount(n);
        stack<int> st;

        for( int i = n-1 ; i >= 0 ; i-- ){

            int element = prices[i];

            while( !st.empty() && st.top() > element ){
                st.pop();
            }
            if( !st.empty() ){
                discount[i] = abs(st.top()-element);
            }
            else{
                discount[i] = element;
            }
            st.push(element);
        }

        return discount;
        
    }
};

*/