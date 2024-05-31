#include<iostream>
using namespace std;

int Single_number1( int arr[] , int n ){

    int XOR = 0;
    for( int i = 0 ; i < n ; i++ ){
        XOR = XOR ^ arr[i];
    }
    return XOR;

}

int main(){
    
    int n;
    cout << "Enter your Array size : ";
    cin >> n;

    int arr[n];
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    int ans = Single_number1( arr , n );
    cout << "Single Number is : " << ans;;
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