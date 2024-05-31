#include<iostream>
using namespace std;

int Subset_sum_XOR( int arr[] , int n ){

    int sumTotal = 0;
    for( int i = 0 ; i < n ; i++ ){
        sumTotal |= arr[i];
    }
    return sumTotal << (n-1); 

}

int main(){

    int n;
    cout << "Enter array size : ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements : ";
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    int ans = Subset_sum_XOR( arr , n );
    cout << "Total sum is : " << ans;
}