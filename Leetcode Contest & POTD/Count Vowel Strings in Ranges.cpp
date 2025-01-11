/*

class Solution {
public:

    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries){
        
        int n = words.size();
        vector<int> prefix(n + 1, 0);
        
        for( int i = 0 ; i < n ; i++ ){
            prefix[i + 1] = prefix[i] + ( isVowel(words[i][0]) && isVowel(words[i].back() ) ? 1 : 0 );
        }
        
        vector<int> ans;

        for( const auto& query : queries ){
            int left = query[0];
            int right = query[1];
            ans.push_back(prefix[right + 1] - prefix[left]);
        }
        
        return ans;

    }
    
};

*/