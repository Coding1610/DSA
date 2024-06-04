#include<bits/stdc++.h>
using namespace std;

void Column_Wave_Print( int arr[][3] , int r , int c ){

    for( int i = 0 ; i < c ; i++ ){

        if( (i&1) == 0 ){
            for( int j = 0 ; j < r ; j++ ){
                cout << arr[j][i] << " ";
            }
        }

        else{
            for( int j = 2 ; j >= 0 ; j-- ){
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    Column_Wave_Print( arr , 3 , 3 );
    
}

/*
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for( int i = 0 ; i < mCols ; i++ ){
        if( (i&1) == 0 ){
            for( int j = 0 ; j < nRows ; j++ ){
                ans.push_back(arr[j][i]);
            }
        }
        else{
            for( int j = nRows-1 ; j >= 0 ; j-- ){
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}
*/