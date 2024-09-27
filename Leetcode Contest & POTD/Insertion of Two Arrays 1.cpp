#include<bits/stdc++.h>
using namespace std;

/* Brute Force

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> arr;
        unordered_map<int,bool> visited;

        int n1 = nums1.size();
        int n2 = nums2.size();

        if( n1 > n2 ){
            for( int i = 0 ; i < n1 ; i++ ){
                for( int j = 0 ; j < n2 ; j++ ){
                    if( nums1[i] == nums2[j] ){
                        if( visited[nums1[i]] == false ){
                            arr.push_back(nums1[i]);
                            visited[nums1[i]] = true;
                        } 
                    }
                }
            }
        }

        else{
            for( int i = 0 ; i < n2 ; i++ ){
                for( int j = 0 ; j < n1 ; j++ ){
                    if( nums2[i] == nums1[j] ){
                        if( visited[nums2[i]] == false ){
                            arr.push_back(nums2[i]);
                            visited[nums2[i]] = true;
                        } 
                    }
                }
            }
        }
        return arr;
    }
    
};

*/

/* Optimal 

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){

        vector<int> arr;
        unordered_map<int,bool> visited;

        for( auto num : nums1 ){
            visited[num] = true;
        }

        for( auto num : nums2 ){
            if( visited.count(num) > 0 && visited[num] == true ){
                arr.push_back(num);
                visited[num] = false;
            }
        }

        return arr;
        
    }
};

*/