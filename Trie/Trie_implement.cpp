#include<bits/stdc++.h>
using namespace std;

// TrienNode Class
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

// Trie Class
class Trie{

    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    // Insertion
    void insertWord( TrieNode* root , string word ){

        // Base Case : Word End
        if( word.length() == 0 ){
            root -> isTerminal = true;
            return;
        }

        // Assume All Characters in CAPS
        TrieNode* child;
        int index = word[0]-'A';

        // Present
        if( root -> Children[index] != NULL ){
            child = root -> Children[index];
        }

        // Absent
        else{
            child = new TrieNode(word[0]);
            root -> Children[index] = child;
        }

        // Recursion Call
        insertWord( child , word.substr(1) );

    }

    void insertion( string word ){
        insertWord( root , word );
    }

    // Searching
    bool searchWord( TrieNode* root , string word ){

        // Base Case : Word End
        if( word.length() == 0 ){
            return root -> isTerminal;
        }

        // Assume All Characters in CAPS
        TrieNode* child;
        int index = word[0]-'A';

        // Present
        if( root -> Children[index] != NULL ){
            child = root -> Children[index];
        }

        // Absent
        else{
            return false;
        }

        // Recursion Call
        return searchWord( child , word.substr(1) );

    }

    bool search( string word ){
        return searchWord( root , word );
    } 

    // Deletion
    void deleteWord( TrieNode* root , string word ){

        // Base Case : Make isTerminal false
        if( word.length() == 0 ){
            root -> isTerminal = false;
            return;
        }

        // Assume All Characters in CAPS
        TrieNode* child;
        int index = word[0]-'A';

        // Present
        if( root -> Children[index] != NULL ){
            child = root -> Children[index];
        }

        // Absent
        else{
            cout << "Word is not Found" << endl;
            return;
        }   

        deleteWord( child , word.substr(1) );

    }

    void deletion( string word ){
        deleteWord( root , word );
    }


};

int main(){

    Trie* T = new Trie();

    T -> insertion("WORD");
    T -> insertion("WOORD");
    T -> insertion("YASH");
    T -> insertion("YASHU");

    bool b1 = T -> search("YASHU");
    cout << b1 << endl;

    bool b2 = T -> search("YASH");
    cout << b2 << endl;

    T -> deletion("YASH");
    T -> deletion("WORD");

    bool b3 = T -> search("YASH");
    cout << b3 << endl;

    bool b4 = T -> search("YASHU");
    cout << b4 << endl;

    bool b5 = T -> search("WOORD");
    cout << b5 << endl;

}