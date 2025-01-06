#include<bits/stdc++.h>
using namespace std;

// you just need to implement this function
string mostCommonWord(string document) {
    // your code here

    // step 1 : convert whole string to lower case
    transform(document.begin(), document.end(), document.begin(), ::tolower);

    // step 2 : for each word count frequency
    unordered_map<string,int> mp;

    // step 3 : travel whole string and seperate word
    string word = "";

    for( int i = 0 ; i < document.length() ; i++ ){
        if( document[i] == ' ' ){
            mp[word]++;
            word = "";
        }
        else{
            word += document[i];
        }
    }

    // last word
    mp[word]++;

    // step 4 : frequency
    int ans = -1;
    string ansWord = "";

    for( pair<string,int> p : mp ){
        if( p.second >= ans ){
            ans = p.second;
            ansWord = p.first;
        }
    }

    if( !ansWord.empty() ){
        return ansWord;
    }

    return "";

}

int main() {
    string document;
    cin >> document;

    // please do not change the below code
    cout << mostCommonWord(document);
    return 0;
}