#include<iostream>
using namespace std;

void Single_number3( int arr[] , int n ){

    long XOR;
    int B1 = 0;
    int B2 = 0;
    for( int i = 0 ; i < n ; i++ ){
        XOR = XOR^arr[i];
    }
    int rightmost = (( XOR & XOR-1 ) ^ XOR );
    for( int i = 0 ; i < n ; i++ ){
        if( (arr[i] & rightmost) != 0 ){
            B1 = B1^arr[i];
        }
        else{
            B2 = B2^arr[i];
        }
    }
    if ( B1 <= B2 ){
        cout << B1 << " " << B2;
    }
    else{
      cout << B2 << " " << B1;
    }
}

int main(){

    int n;
    cout << "Enter your Array size : ";
    cin >> n;

    int arr[n];
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    Single_number3( arr , n );
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