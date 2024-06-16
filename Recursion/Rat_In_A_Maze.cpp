#include<bits/stdc++.h>
using namespace std;

/*
bool isSafe( int x , int y , vector<vector<int>>& arr , vector<vector<int>>& visited , int n ){

    if( (x >= 0 && x < n) && ( y >= 0 && y < n ) && ( arr[x][y] == 1 ) && visited[x][y] == 0 ){
        return true;
    }
    else{
        return false;
    }
    
}

void solve( vector<vector<int>>& arr , int n , vector<vector<int>>& visited , int x , int y , string path , vector<string>& ans ){

    // Base Case
    if( x == n-1 && y == n-1 ){
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Down
    int newx = x+1;
    int newy = y;
    if( isSafe( newx , newy , arr , visited , n ) ){
        path.push_back('D');
        solve( arr , n , visited , newx , newy , path , ans );
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y-1;
    if( isSafe( newx , newy , arr , visited , n ) ){
        path.push_back('L');
        solve( arr , n , visited , newx , newy , path , ans );
        path.pop_back();
    }


    // Right
    newx = x;
    newy = y+1;
    if( isSafe( newx , newy , arr , visited , n ) ){
        path.push_back('R');
        solve( arr , n , visited , newx , newy , path , ans );
        path.pop_back();
    }


    // Up
    newx = x-1;
    newy = y;
    if( isSafe( newx , newy , arr , visited , n ) ){
        path.push_back('U');
        solve( arr , n , visited , newx , newy , path , ans );
        path.pop_back();
    }

    visited[x][y] = 0;

}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    
    vector<string> ans;

    // Base Case
    if( arr[0][0] == 0 ){
        return ans;
    }

    int x = 0;
    int y = 0;
    string path = "";

    vector<vector<int>> visited = arr;

    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
            visited[i][j] = 0;
        }
    }

    solve( arr , n , visited , x , y , path , ans );

    sort(ans.begin(),ans.end());

    return ans;
    
}
*/