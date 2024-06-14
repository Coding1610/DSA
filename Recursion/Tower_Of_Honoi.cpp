#include<bits/stdc++.h>
using namespace std;

/* Coding Ninjas

void solve( int n , int A , int C , int B , vector<vector<int>>& Moves ){

    // Base Case
    if( n == 0 ){
        return;
    }

    // Recursion Call
    solve( n-1 , A , B , C , Moves );
    Moves.push_back({A,C});
    solve( n-1 , B , C , A , Moves );

}

vector<vector<int>> towerOfHanoi(int n){

    vector<vector<int>> Moves;

    int A = 1;
    int B = 2;
    int C = 3;

    solve( n , A , C , B , Moves );

    return Moves;
}

*/

void solve( int n , char Source , char Destination , char Helper ){

    // Base Case
    if( n == 0 ){
        return;
    }

    // Recursion Call
    solve( n-1 , Source , Helper , Destination );

    cout << "Move " << n << " from " << Source << " to " << Destination << endl;
    
    solve( n-1 , Helper , Destination , Source );

}

int main(){

    int n;
    cout << "Enter Your Total No. Of Disks : ";
    cin >> n;

    char Source = 'A';
    char Helper = 'B';
    char Destination = 'C';

    solve( n , Source , Destination , Helper );

}