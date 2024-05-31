#include<bits/stdc++.h>
using namespace std;

/*
int count(vector<int>& arr, int n, int x) 
{

    int low=0;
    int high= n-1;
    int first= -1;
    int last=-1;
    int cnt=0;

    //for finding the first occurrence of the element
    while(low<=high){

        int mid= low+(high-low)/2;
        if(arr[mid]==x){
            first= mid;
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    //for finding the last occurrence of the element
    low=0;
    high= n-1;

    while(low<=high){

        int mid= low+(high-low)/2;
        if(arr[mid]==x){
            last= mid;
            low=mid+1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    //count 
    if(first==n || arr[first]!=x){
        return 0;
    }
    else{
        cnt= (last-first)+1;
    }
    return cnt;
}
*/

