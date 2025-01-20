#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k){

        int maxSum =0;
        int leftSum = 0;
        int rightSum =0;
        int n = cardPoints.size();

        for( int i = 0 ; i < k ; i++ ){
            leftSum += cardPoints[i];
        }

        maxSum = max(maxSum,leftSum);

        int r = n-1;

        for( int i = k-1 ; i >= 0 ; i-- ){
            leftSum -= cardPoints[i];
            rightSum += cardPoints[r];
            maxSum = max(maxSum,(leftSum + rightSum));
            r--;
        }

        return maxSum;

    }
};

*/