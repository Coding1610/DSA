#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches){

        int c1 = 0;
        int c0 = 0;

        for( int it : students ){
            if ( it == 0 ){
                c0++;
            }
            else{
                c1++;
            }
        }

        for( int it : sandwiches ){

            if( it == 0 ){
                if( c0 > 0 ){
                    c0--;
                }
                else{
                    break;
                }
            }
            
            else{
                if( c1 > 0 ){
                    c1--;
                }
                else{
                    break;
                }
            }

        }

        return c0 + c1;
        
    }
};

*/