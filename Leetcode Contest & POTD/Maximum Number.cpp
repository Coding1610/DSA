#include<bits/stdc++.h>
using namespace std;

/*

class Solution {
public:
    int maximumSwap(int num) {

        string str = to_string(num);

        int n = str.size();

        int swap1 = -1;
        int swap2 = -1;
        int maxIndex = -1;

        for( int i = n-1 ; i >=0 ; i-- ){

            if( maxIndex == -1 || str[i] > str[maxIndex] ){
                maxIndex = i;
            }

            else if( str[i] < str[maxIndex] ){
                swap1 = i;
                swap2 = maxIndex;
            }

        }

        if( swap1 != -1 && swap2 != -1 ){
            swap( str[swap1] , str[swap2] );
        }

        return stoi(str);
        
    }
};

*/