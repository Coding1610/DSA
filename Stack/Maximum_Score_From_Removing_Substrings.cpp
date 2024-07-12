#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    int solve(string s, vector<bool>& removed, char ch1, char ch2, int points){

        int score = 0;
        stack<int> st;

        for( int i = 0 ; i < s.length() ; i++ ){

            if(removed[i]) continue;

            if( s[i] == ch2 && !st.empty() && s[st.top()] == ch1 ){
                score += points;
                removed[i] = true;
                removed[st.top()] = true;
                st.pop();
            }

            else{
                st.push(i);
            }
            
        }

        return score;
    }

    int maximumGain(string s, int x, int y) {

        int n = s.length();
        vector<bool> removed( n , false );

        int totalCost = 0;

        if(x >= y){
            totalCost += solve( s, removed , 'a' , 'b' , x );
            totalCost += solve( s, removed , 'b' , 'a' , y );
        }

        else{
            totalCost += solve( s , removed , 'b' , 'a' , y );
            totalCost += solve( s , removed , 'a' , 'b' , x );
        }

        return totalCost;

    }
};

*/