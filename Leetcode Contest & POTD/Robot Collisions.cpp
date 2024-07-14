#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<int> survivedRobotsHealths( vector<int>& p , vector<int>& h , string d ){

        stack<int> st;
        map<int,int>mp; 
        int n = p.size();
        vector<pair<int, pair<int, char>>> com;

        for( int i = 0 ; i < n ; i++ ){
            mp[p[i]] = i;
            com.push_back( { p[i] , {h[i] , d[i]} } );
        }

        sort( com.begin(), com.end() );

        for( int i = 0 ; i < n ; i++ ){

            while( !st.empty() && com[i].second.second == 'L' && com[i].second.first > 0 ){

                if( com[st.top()].second.first < com[i].second.first ){
                    com[st.top()].second.first = 0;
                    st.pop();
                    com[i].second.first--;
                } 
                else{
                    if( com[st.top()].second.first == com[i].second.first ){
                        com[st.top()].second.first = 0;
                        com[i].second.first = 0;
                        st.pop();
                    } 
                    else{
                        com[st.top()].second.first--;
                        com[i].second.first = 0;
                    }
                    break;
                }

            }

            if( com[i].second.second == 'R' ){
                st.push(i);
            }

        }

        vector<int> ans;
        vector<pair<int,int>>helper;

        for( auto it : com ){
            if( it.second.first > 0 ){
                helper.push_back( { mp[it.first] , it.second.first } );
            }
        }

        sort(helper.begin(),helper.end());
        
        for( int i = 0 ; i < helper.size() ; i++){
            ans.push_back( helper[i].second );
        }

        return ans;
        
    }
};

*/