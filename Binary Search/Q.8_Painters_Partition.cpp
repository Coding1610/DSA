#include<bits/stdc++.h>
using namespace std;

/*
bool Is_Possible( vector<int>& arr , int n , int k , int mid ){

    int painters = 1;
    int time = 0;

    for( int i = 0 ; i < n ; i++ ){

        if( arr[i] <= mid && time+arr[i] <= mid ){
            time += arr[i];
        }
        else{
            painters++;
            if( painters > k || arr[i] > mid ){
                return false;
            }
            time = arr[i];
        }
    }
    return true;
}

int Painters_Partition( vector<int>& arr , int n , int k ){

    int s = 0;
    int e = 0;
    
    for( int i = 0 ; i < n ; i++ ){
        e += arr[i];
    }

    int ans = -1;
    int mid = s+(e-s)/2;

    while( s <= e ){

        if( Is_Possible( arr , n , k , mid ) ){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    return Painters_Partition( boards , n , k );
}
*/