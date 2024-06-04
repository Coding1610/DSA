#include<bits/stdc++.h>
using namespace std;

void Row_Wave_Print( int arr[][3] , int r , int c ){

    for( int i = 0 ; i < r ; i++ ){

        if( (i&1) == 0 ){
            for( int j = 0 ; j < c ; j++ ){
                cout << arr[i][j] << " ";
            }
        }

        else{
            for( int j = 2 ; j >= 0 ; j-- ){
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    Row_Wave_Print( arr , 3 , 3 );

}

/*
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for( int i = 0 ; i < nRows ; i++ ){
        if( (i&1) == 0 ){
            for( int j = 0 ; j < mCols ; j++ ){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for( int j = nRows-1 ; j >= 0 ; j-- ){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}
*/