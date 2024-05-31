#include<bits/stdc++.h>
using namespace std;

/*
bool isValidPair( vector<int> &arr , int n , int k , int m )
{
    if( n%2 != 0 ){
        return false;
    }

    unordered_map<int,int> count;

    for( int i = 0 ; i < n ; i++ ){
        count[arr[i]%k]++;
    }

    int first;
    int second;

    for( int i = 0 ; i < n ; i++ ){
        first = count[arr[i]%k];
        second = count[(m-arr[i]%k+k)%k];
        if( first != second ){
            return false;
        }
    }
    return true;
}
*/