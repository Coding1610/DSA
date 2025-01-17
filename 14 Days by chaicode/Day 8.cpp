#include<bits/stdc++.h>
using namespace std;

struct Quality {
    string quality;
    int required;
};

string selectStreamQuality(int bandwidth, vector<Quality>& qualities) {

    if( qualities.empty() ) return "No Quality Available";

    sort( qualities.begin(), qualities.end() , [](const Quality& a, const Quality& b ) {
        return a.required < b.required;
    });

    string result = "No Quality Available";

    for( const auto& q : qualities ){
        if( q.required <= bandwidth ){
            result = q.quality;
        }
        else{
            break;
        }
    }

    return result;
    
}

int main() {
    int bandwidth;
    cin >> bandwidth;

    int n;
    cin >> n;


    vector<Quality> qualities(n);
    for (int i = 0; i < n; ++i) {
        cin >> qualities[i].quality >> qualities[i].required;
    }

    cout << selectStreamQuality(bandwidth, qualities);
}