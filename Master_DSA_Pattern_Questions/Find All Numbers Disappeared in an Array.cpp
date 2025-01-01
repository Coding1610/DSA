/*

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums){

        vector<int> ans;
        int n = nums.size();
        unordered_map<int,bool> mapp;

        for( int i = 1 ; i <= n ; i++ ){
            mapp[i] = true;
        }

        for( int x : nums ){
            mapp[x] = false;
        }

        for( pair<int,bool> p : mapp ){
            if( p.second == true ){
                ans.push_back(p.first);
            }
        }
        
        return ans;

    }
};

*/