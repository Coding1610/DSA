#include<bits/stdc++.h>
using namespace std;

// you just need to implement the function
vector<int> maxInRollingWindow(vector<int>& prices, int k) {
    // you need to write the code here

    vector<int> result;
    
    int n = prices.size();

    for( int i = 0 ; i < (n-k+1) ; i++ ){

        vector<int> maxi;

        for( int j = i ; j < (i+k) ; j++ ){
            maxi.push_back( prices[j] );
        }

        result.push_back( *max_element(maxi.begin(),maxi.end()) );

    }

    return result;

}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

   // please do not remove the following code
    vector<int> result = maxInRollingWindow(prices, k);
    for(int i = 0; i < result.size(); i++) {
        if(i == result.size() - 1) {
            cout << result[i];
        } else {
            cout << result[i] << " ";
        }
    }

    return 0;
}