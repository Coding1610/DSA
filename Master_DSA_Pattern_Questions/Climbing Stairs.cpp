/*

class Solution {
public:
    int climbStairs(int n){

        int c = 0;
        int s1 = 1;
        int s2 = 1;

        for( int i = 1 ; i < n ; i++ ){
            c = s1 + s2;
            s2 = s1;
            s1 = c;
        }

        return c;
        
    }
};

*/