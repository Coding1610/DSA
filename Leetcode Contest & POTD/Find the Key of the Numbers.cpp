#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:

    string solve( int num ){

        string s = to_string(num);
        int n = s.size();

        if( n == 4 ){
            return s;
        }

        else{
            if( n == 1 ){
                s += "000";
            }
            else{
                reverse(s.begin(),s.end());
                while( s.size() != 4 ){
                    s += '0';
                }
            }
        }

        reverse(s.begin(),s.end());
        return s;

    }

    int generateKey(int num1, int num2, int num3){

        string s1 = solve(num1);
        string s2 = solve(num2);
        string s3 = solve(num3);
        
        string ans = "";

        for( int i = 0 ; i < 4 ; i++ ){
            ans += min({s1[i],s2[i],s3[i]});
        }

        int number = stoi(ans);
        return number;
        
    }
    
};

*/