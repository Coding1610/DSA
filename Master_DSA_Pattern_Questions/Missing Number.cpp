/*

class Solution {
public:
    int missingNumber(vector<int>& nums){

        int actualSum = 0;
        int missingSum = 0;
        int n = nums.size();
        
        for( int i = 1 ; i <= n ; i++ ){
            actualSum += i;
        }

        for( int x : nums ){
            missingSum += x;
        }

        return actualSum - missingSum;
        
    }
};

*/