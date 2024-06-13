#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
    private:
    
    void subset( vector<int> arr , vector<int> output , int index , vector<vector<int>> &ans ){

        // Base Case
        if(index >= arr.size()){
            ans.push_back(output);
            return;
        }

        // Exclude - Recursion Call
        subset( arr , output , index+1 , ans );

        // Include - Recursion Call 
        int element = arr[index];
        output.push_back(element);
        subset( arr , output , index+1 , ans );

    }

    public:

    vector<vector<int>> subsets(vector<int> &arr){

        vector<int> output;
        vector<vector<int>> ans;
        int index = 0;
        subset( arr , output , index , ans );
        return ans;

    }
};
*/