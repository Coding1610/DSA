#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int countOfSubstrings(string word, int k){

        int ans = 0;

        for( int i = 0 ; i < word.size() ; i++ ){

            int count = 0;
            unordered_set<char> st;

            for( int j = i ; j < word.size() ; j++ ){

                if( word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u' ){
                    st.insert(word[j]);
                }

                else{
                    count++;
                }   

                if( st.size() == 5 && count == k ){
                    ans++;
                }

            }

        }

        return ans;
        
    }
};

*/