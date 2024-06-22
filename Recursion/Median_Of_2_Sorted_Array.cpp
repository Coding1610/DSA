#include<bits/stdc++.h>
using namespace std;

/* Brute Force

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){

        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1+n2;

        vector<int> nums(n);

        int i = 0;
        int j = 0;
        int index = 0;

        while( i < n1 && j < n2 ){

            if( nums1[i] <= nums2[j] ){
                nums[index] = nums1[i];
                index++;
                i++;
            }

            else{
                nums[index] = nums2[j];
                index++;
                j++;
            }
        }

        while( i < n1 ){
            nums[index] = nums1[i];
            index++;
            i++;
        }

        while( j < n2 ){
            nums[index] = nums2[j];
            index++;
            j++;
        }

        int mid =(n-1)/2;

        if(n%2==0){
            double ele1 = nums[mid];
            double ele2 = nums[mid+1];
            return (ele1+ele2)/2;
        }   
        return nums[mid];
    }
};

*/

/* Optimal



*/