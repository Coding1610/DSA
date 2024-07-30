#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    bool areNumbersAscending(string s) {

        int prev_num = -1;
        string num = "";

        for( int i = 0 ; i <= s.size() ; i++ ){

            if( i < s.size() && isdigit(s[i]) ){
                num += s[i];
            } 

            else{

                if( !num.empty() ){

                    int current_num = stoi(num);
                    num = "";

                    if( current_num <= prev_num ){
                        return false;
                    }

                    prev_num = current_num;

                }

            }

        }

        return true;
        
    }
};

*/