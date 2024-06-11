#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int climbStairs(int n){

        int step_1 = 1;
        int step_2 = 1;
        int c = -1;

        for( int i = 2 ; i <= n ; i++ ){
            c = (step_1 + step_2); // For Large N , Mode With (10^9)+7;
            step_2 = step_1;
            step_1 = c;
        }
        return step_1; 
    }
};

/*
int climbStairs(int n){

    // Base Case
    if( n < 0 ){
        return 0;
    }

    if( n == 0 ){
        return 1;
    }

    // Recursion Call
    return climbStairs(n-1) + climbStairs(n-2);
   
}

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    cout << climbStairs(n);
}
*/