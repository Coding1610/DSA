/*

class Solution {
public:
    int prefixCount(vector<string>& words, string pref){

        int count = 0;
        int n = words.size();

        for( int i =0 ; i < n ; i++ ){
            if( words[i].find(pref) == 0 ){
                count++;
            }
        }

        return count;

    }   
};

*/