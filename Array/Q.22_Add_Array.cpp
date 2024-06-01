#include<bits/stdc++.h>
using namespace std;

/* LeetCode

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int n = num.size();

        for(int i=n-1; i>=0; i--){
            num[i] += k;
            k = num[i] / 10;
            num[i] = num[i] % 10;
        }

        while(k > 0){
            num.insert(begin(num), k%10 );
            k /= 10;
        }

        return num;
    }
};
*/

/* CodingNinjas

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

    vector<int> sumArray;
    string s1 = "";
    string s2 = "";

    for( int i = 0 ; i < n ; i++ ){
        s1 += to_string(a[i]);
    }        

    for( int i = 0 ; i < m ; i++ ){
        s2 += to_string(b[i]);
    }

    int n1 = stoi(s1);
    int n2 = stoi(s2);
    int sum = n1+n2;

    string s3 = to_string(sum);
    int len = s3.length();

    for( int i = 0 ; i < len ; i++ ){
        sumArray.push_back(sum%10);
        sum = sum/10;
    }
    reverse(sumArray.begin(),sumArray.end());
    return sumArray;
}
*/