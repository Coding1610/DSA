#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    string longestDiverseString(int a, int b, int c){

        string ans = "";
        priority_queue<pair<int,char>> pq;

        if( a > 0 ) pq.push({a,'a'}); 
        if( b > 0 ) pq.push({b,'b'});
        if( c > 0 ) pq.push({c,'c'});

        while( pq.size() > 1 ){

            int f1 = pq.top().first;
            char ch1 = pq.top().second;
            pq.pop();

            if( ans.size() <= 1 ){

                ans += ch1;
                f1--;
                if( f1 > 0 ) pq.push({f1,ch1});
                
            }


            else{

                if( ans[ans.size()-1] == ch1 && ans[ans.size()-2] == ch1 ){

                    int f2 = pq.top().first;
                    char ch2 = pq.top().second;
                    pq.pop();

                    ans += ch2;
                    f2--;

                    if( f2 > 0 ) pq.push({f2,ch2});
                    if( f1 > 0 ) pq.push({f1,ch1});

                }

                else{

                    ans += ch1;
                    f1--;
                    if( f1 > 0 ) pq.push({f1,ch1});

                }

            }

        }

        if( pq.size() == 1 ){

            int f3 = pq.top().first;
            char ch3 = pq.top().second;

            if( f3 <= 1 ){
                ans += ch3;
            }

            else{
                ans += ch3;
                ans += ch3;
            }

        } 

        return ans;
        
    }
};

*/