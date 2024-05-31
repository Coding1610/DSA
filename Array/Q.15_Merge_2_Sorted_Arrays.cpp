#include<bits/stdc++.h>
using namespace std;

/*
Without Extra Space

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){

        if(n == 0){
            return;
        }

        int len1 = nums1.size();
        int end_idx = len1-1;

        while( n > 0 && m > 0 ){

            if( nums2[n-1] >= nums1[m-1] ){
                nums1[end_idx] = nums2[n-1];
                n--;
            }
            else{
                nums1[end_idx] = nums1[m-1];
                m--;
            }
            end_idx--;
        }

        while( n > 0 ){
            nums1[end_idx] = nums2[n-1];
            n--;
            end_idx--;
        }   
    }
};
*/

/*
With Extra Space

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    
    vector<int>ans;

    int arr1index =0;
    int arr2index =0;

    while( arr1index < m && arr2index < n ){

        if( arr1[arr1index] < arr2[arr2index] ){
            ans.push_back( arr1[arr1index] );
            arr1index++;
        }
        else{
            ans.push_back( arr2[arr2index] );
            arr2index++;
        }
    }

    while( arr1index < m ){
        ans.push_back( arr1[arr1index] );
        arr1index++;
    }

    while( arr2index < n ){
        ans.push_back(arr2[arr2index]);
        arr2index++;
    }
    return ans;
}
*/