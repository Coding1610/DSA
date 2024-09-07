#include<bits/stdc++.h>
using namespace std;

/*

bool isSafe( int x , int y , int n , vector<vector<int>>& arr , vector<vector<bool>>& visited ){

    if( (x < n && x >= 0) && ( y < n && y >= 0 ) && ( visited[x][y] == false ) && ( arr[x][y] == 1 ) ){
        return true;
    }

    else{
        return false;
    }

}

void solve( vector<vector<int>>& arr , vector<vector<bool>>& visited , int n , int x , int y , string path , vector<string>& allPaths ){

    // Base Case
    if( x == n-1 && y == n-1 ){
        allPaths.push_back(path);
        return;
    }

    visited[x][y] = true;
    
    // Down 
    if( isSafe( x+1 , y , n , arr , visited ) ){
        solve( arr , visited , n , x+1 , y , path+'D' , allPaths );
    }

    // Left 
    if( isSafe( x , y-1 , n , arr , visited ) ){
        solve( arr , visited , n , x , y-1 , path+'L' , allPaths );
    }

    // Right
    if( isSafe( x , y+1 , n , arr , visited ) ){
        solve( arr , visited , n , x , y+1 , path+'R' , allPaths );
    } 

    // Up
    if( isSafe( x-1 , y , n , arr , visited ) ){
        solve( arr , visited , n , x-1 , y , path+'U' , allPaths );
    }

    visited[x][y] = false;

}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    
    int x = 0;
    int y = 0;
    string path = "";
    vector<string> allPaths;
    vector<vector<bool>> visited(n,vector<bool>(n,0));

    if( arr[0][0] == 0 ){
        return allPaths;
    }    

    solve( arr , visited , n , x , y , path , allPaths );
    return allPaths;

}

*/