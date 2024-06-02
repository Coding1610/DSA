#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:

    bool isSame( int a[26] , int b[26] ){

        for( int i = 0 ; i < 26 ; i++ ){
            if( a[i] != b[i] ){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        int count1[26] = {0};
        int windowSize = s1.length();
        for( int i = 0 ; i < windowSize ; i++ ){
            int index = s1[i]-'a';
            count1[index]++;
        }  

        int i = 0;
        int count2[26] = {0};
        while( i < windowSize && i < s2.length() ){
            int newIndex = s2[i]-'a';
            count2[newIndex]++;
            i++;
        }

        if( isSame( count1 , count2 ) ){
            return true;
        }

        while( i < s2.length() ){

            int newChar = s2[i]-'a';
            count2[newChar]++;

            int oldChar = s2[i-windowSize]-'a';
            count2[oldChar]--;

            i++;

            if( isSame( count1 , count2 ) ){
                return true;
            }
        }
        return false;
    }
};
*/