#include<bits/stdc++.h>
using namespace std;

/*

class DataStream {
public:

    int data;
    int range;
    int count = 0;
    queue<int> q;

    DataStream(int value, int k) {
        range = k;
        data = value;
    }
    
    bool consec(int num) {
        
        if( q.empty() ){

            q.push(num);

            if( num == data ){
                count++;
            }

            else{
                count = 0;
            }

        }

        else if( !q.empty() ){

            if( num == q.back() && num == data ){
                count++;
            }

            else if(num != q.back() && num == data ){
                count++;
            }

            else{
                count = 0;
            }

            q.push(num);

        }

        if( count == range ){
            count--;
            return true;
        }

        return false;

    }
};


*/