#include<bits/stdc++.h>
using namespace std;

bool Linear_Search( int arr[][4] , int r , int c , int key ){

    for( int i = 0 ; i < r ; i++ ){
        for( int j = 0 ; j < c ; j++ ){
            if( key == arr[i][j] ){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    int target_1 = 6;
    int target_2 = -6;

    for( int i = 0 ; i < 3 ; i++ ){
        for( int j = 0 ; j < 4 ; j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    bool ans_1 = Linear_Search( arr , 3 , 4 , target_1 );
    bool ans_2 = Linear_Search( arr , 3 , 4 , target_2 );

    cout << "Ans_1 Is : " << ans_1 << endl;
    cout << "Ans_2 Is : " << ans_2 << endl;
}