#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum){

        int col = colsum.size();

        vector<vector<int>> newMatrix( 2 , vector<int>(col,0) );

        for( int i = 0 ; i < col ; i++ ){

            if( colsum[i] == 1 ){

                if( upper > lower ){
                    newMatrix[0][i] = 1;
                    upper--;
                } 

                else{
                    newMatrix[1][i] = 1;
                    lower--;
                }
                
            }

            if( colsum[i] == 2 ){
                newMatrix[0][i] = 1;
                newMatrix[1][i] = 1;
                upper -= 1;
                lower -= 1;
            }

            if( upper < 0 || lower < 0 ){
                return {};
            }

        }

        if( upper != 0 || lower != 0 ){
            return {};
        }

        return newMatrix;
        
    }
};

*/