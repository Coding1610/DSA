#include<bits/stdc++.h>
using namespace std;

/*

class TrieNode{
public:

    bool isTerminal;
    TrieNode* children[26];

    TrieNode(){
        isTerminal = false;
        for( int i = 0 ; i < 26 ; i++ ){
            children[i] = NULL;
        }
    }

};

class Trie {
public:

    TrieNode* root;

    Trie() {
        root = new TrieNode();    
    }
    
    // Insertion 
    void insertWord( TrieNode* root , string word ){

        if( word.length() == 0 ){
            root -> isTerminal = true;
            return;
        }

        TrieNode* child;
        int i = word[0]-'a';

        if( root -> children[i] != NULL ){
            child = root -> children[i];
        }

        else{
            child = new TrieNode();
            root -> children[i] = child;
        }

        insertWord( child , word.substr(1) );

    }

    void insert(string word) {
        insertWord( root , word );
    }

    // Search
    bool searchWord( TrieNode* root , string word ){
        
        if( word.length() == 0 ){
            return root -> isTerminal;
        }

        TrieNode* child;
        int i = word[0]-'a';

        if( root -> children[i] != NULL ){
            child = root -> children[i];
        }

        else{
            return false;
        }

        return searchWord( child , word.substr(1) );

    }
    
    bool search(string word) {
        return searchWord( root , word );
    }

    // Prefix
    bool isPrefix( TrieNode* root , string word ){

        if( word.length() == 0 ){
            return true;
        }

        TrieNode* child;
        int i = word[0]-'a';

        if( root -> children[i] != NULL ){
            child = root -> children[i];
        }

        else{
            return false;
        }

        return isPrefix( child , word.substr(1) );
        
    }
    
    bool startsWith(string prefix) {
        return isPrefix( root , prefix );
    }

};


*/