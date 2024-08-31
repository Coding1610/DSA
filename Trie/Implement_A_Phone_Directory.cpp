#include<bits/stdc++.h>
using namespace std;

/*

class TrieNode{

    public:
    char data;
    TrieNode* Children[26];
    bool isTerminal;

    TrieNode( char ch ){
        data = ch;
        for( int i = 0 ; i < 26 ; i++ ){
            Children[i] = NULL;
        }
        isTerminal = false;
    }
    
};

class Trie{

    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }


    // Insertion
    void insertutil( TrieNode* root , string word ){

        // Base Case
        if( word.length() == 0 ){
            root -> isTerminal = true;
            return;
        }

        // Find
        TrieNode* child;
        int index = word[0] - 'a';

        // Present
        if( root -> Children[index] != NULL ){
            child = root -> Children[index];
        }

        // Absent
        else{
            child = new TrieNode( word[0] );
            root -> Children[index] = child;
        } 

        // Recursion
        insertutil( child , word.substr(1) );

    }

    void insertword( string word ){
        insertutil( root , word );
    }


    // Print All Suggestions 
    void printSuggestions( TrieNode* curr , vector<string> &temp , string Prefix ){

        if( curr -> isTerminal ){
            temp.push_back( Prefix );
        }

        for( char ch = 'a' ; ch <= 'z' ; ch++ ){

            TrieNode* next = curr -> Children[ch-'a'];

            if( next != NULL ){
                Prefix.push_back( ch );
                printSuggestions( next , temp , Prefix );
                Prefix.pop_back();
            }

        }

    }


    // Check All Suggestions
    vector<vector<string>> GetSuggestions( string queryStr ){

    string Prefix = "";
    TrieNode* prev = root;
    vector<vector<string>> output;

    for( int i = 0 ; i < queryStr.length() ; i++ ){

        char lastchar = queryStr[i];
        Prefix.push_back( lastchar );

        // Check Last Char is present or node
        TrieNode* curr = prev -> Children[ lastchar - 'a' ];
        
        // If Curr Not Present
        if( curr == NULL ){
            break;
        }

        /// If Found Then Print All Sugestions
        vector<string> temp;
        printSuggestions( curr , temp , Prefix );

        output.push_back( temp );
        temp.clear();

        // All Happen Then Pre Increase
        prev = curr;
    }

    return output;
}
};

vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    // 1 : Creattion Of Trie
    Trie* t = new Trie();

    // 2 : Insert All Contact In Trie
    for( int i = 0 ; i < contactList.size() ; i++ ){
        string str = contactList[i];
        t -> insertword( str );
    }

    // 3 : Return Ans
    return t -> GetSuggestions( queryStr );

}

*/