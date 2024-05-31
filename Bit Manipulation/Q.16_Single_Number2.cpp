#include<iostream>
using namespace std;

int Single_number2( int arr[] , int n ){

    int ones = 0;
    int tows = 0;
    for( int i = 0 ; i < n ; i++ ){
        ones = (( ones ^ arr[i] ) & (~tows));
        tows = (( tows ^ arr[i] ) & (~ones));
    }
    return ones;
}

int main(){

    int n;
    cout << "Enter your Array size : ";
    cin >> n;

    int arr[n];
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    int ans = Single_number2( arr , n );
    cout << "Single Number is : " << ans;
}

/*
Brute Force

        unordered_map<int, int> mp;
        for (auto& n : nums)
            mp[n]++;
        vector<int> res;
        for (auto& [key, value] : mp)
            if (value == 1){
                res.push_back(key);
            }
        return res;

*/