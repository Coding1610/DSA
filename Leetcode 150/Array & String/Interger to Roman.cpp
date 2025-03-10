#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    string intToRoman(int num){

        vector<int> number = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> roman = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        int i = 0;
        string ans = "";

        while( num > 0 ){
            if( num >= number[i] ){
                ans += roman[i];
                num -= number[i];
            }
            else{
                i++;
            }
        }

        return ans;

    }
};

*/