/*

class Solution {
public:
    bool canConstruct(string s, int k) {

        // Game is about to check only, if single character > k then not possible to make k palindrome.
        
        int len = s.length();

        if( len == k ) return true;

        if( len < k ) return false;

        unordered_map<char,int> mp;

        for( char ch : s ){
            mp[ch]++;
        }

        int singleCharacter = 0;

        for( pair<char,int> p : mp ){
            if( p.second % 2 == 1 ){
                singleCharacter++;
            }
        }

        return ( singleCharacter <= k && k <= len );

    }
};

*/