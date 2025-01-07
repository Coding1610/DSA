#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> func(vector<vector<int>> teams){

    int n = teams.size();
    vector<vector<int>> result;
   
    for( int i = 0 ; i < n ; i++ ){
        int total = 0;
        int maxKill = 0;
        for( int j = 0 ; j < teams[i].size() ; j++ ){
           total += teams[i][j];
           maxKill = max( maxKill, teams[i][j] );
        }
        result.push_back({i + 1, total, maxKill});
    }

    sort( result.begin(), result.end(), [](vector<int>& a, vector<int>& b){
       if( a[1] != b[1] ) return a[1] > b[1];
       return a[2] > b[2];
    });
  
   vector<vector<int>> winners;
   winners.push_back(result[0]);
   
    for( int i = 1 ; i < n ; i++ ){
        if( result[i][1] == result[0][1] && result[i][2] == result[0][2] ){
            winners.push_back( result[i] );
        }
    }
   
    return winners;
    
}

int main() {
    // initial code 
    vector<vector<int>> teams;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int team_size;
        cin >> team_size;
        vector<int> team(team_size);
        for (int j = 0; j < team_size; j++) {
            cin >> team[j];
        }
        teams.push_back(team);
    }
    // you have to implement the func() only
    vector<vector<int>> result = func(teams);

    // print the result(please don't modify this)
    for(int i = 0; i < result.size(); i++) {
        if(i == result.size() - 1) {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2];
        } else {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
        }
    }   
    // end of initial code
    return 0;
    
}