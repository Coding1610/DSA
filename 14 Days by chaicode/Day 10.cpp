#include<bits/stdc++.h>
using namespace std;

vector<int> maximizeAdRevenue(const vector<int> &viewer_retention, const vector<int> &ad_value, int k){

    int n = viewer_retention.size();

    vector<pair<long long,int>> total;

    for( int i = 0 ; i < n ; i++ ){
        long long revenue = (long long)viewer_retention[i] * ad_value[i];
        total.push_back({revenue,i});
    }

    sort( total.begin(), total.end(), greater<pair<long long,int>>() );

    vector<int> ans;
    vector<bool> use(n,false);

    for( int i = 0 ; i < n && ans.size() < k ; i++ ){

        bool canPut = true;
        int index = total[i].second;

        if( index > 0 && use[index-1] ) canPut = false;
        if( index < n-1 && use[index+1] ) canPut = false;

        if( canPut ){
            use[index] = true;
            ans.push_back(index);
        }

    }

    sort( ans.begin(), ans.end() );

    return ans;

}

int main() {
    vector<int> viewer_retention;
    vector<int> ad_value;
    int k;
    int n;

    cin >> n; 
    cin >> k;
    // please don't change the main function
    for (int i = 0; i < n; ++i) {
        int retention;
        cin >> retention;
        viewer_retention.push_back(retention);
    }
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        ad_value.push_back(value);
    }

    vector<int> result = maximizeAdRevenue(viewer_retention, ad_value, k);
    for (int i = 0; i < result.size(); ++i) {
        if (i == result.size() - 1) {
            cout << result[i];
        } else {
            cout << result[i] << " ";
        }
    }
    return 0;
}