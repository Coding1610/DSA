#include<bits/stdc++.h>
using namespace std;

vector<int> sol(int n, vector<int>& A) {
    
    vector<int> ans;
    vector<int> odd;
    ans.reserve(n);
    odd.reserve(n);

    for( int i = 0 ; i < n ; i++ ){
        if( A[i]%2 == 0 ){
            ans.push_back(A[i]);
        }
        else{
            odd.push_back(A[i]);
        }
    }

    ans.insert( ans.end(), odd.begin(), odd.end() );

    return ans;
    
}

int main(){

    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // please don't modify the main function
    vector<int> result = sol(n, A);

    for (int i = 0; i < n; i++) {
        if (i == result.size() - 1) {
            cout << result[i];
        } else {
            cout << result[i] << " ";
        }
    }

    return 0;

}