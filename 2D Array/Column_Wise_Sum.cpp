#include<bits/stdc++.h>
using namespace std;

void Column_Sum( int arr[][4] , int r , int c , vector<int>& ans ){

    int sum = 0;

    for( int i = 0 ; i < c ; i++ ){
        for( int j = 0 ; j < r ; j++ ){
            sum += arr[j][i];
        }
        ans.push_back(sum);
        sum = 0;
    }
}

int main(){

    int arr[3][4] = {{1,2,3,4},{4,5,6,7},{2,4,3,6}};
    vector<int> ans;

    Column_Sum( arr , 3 , 4 , ans );  

    for( int i = 0 ; i < 4 ; i++ ){
        cout << "Sum Of Column " << i << " Is : " << ans[i] << " " << endl;
    }  
}