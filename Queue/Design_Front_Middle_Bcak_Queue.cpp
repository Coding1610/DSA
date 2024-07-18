#include<bits/stdc++.h>
using namespace std;

/*

class FrontMiddleBackQueue {
public:

    list<int> ml;

    FrontMiddleBackQueue() {}
    
    void pushFront(int val) {
        ml.push_front(val);       
    }
    
    void pushMiddle(int val) {
        list<int> :: iterator it = ml.begin();
        advance(it,ml.size()/2);
        ml.insert(it,val);
    }
    
    void pushBack(int val) {
        ml.push_back(val);
    }
    
    int popFront() {
        if( !ml.empty() ){
            int val = ml.front();
            ml.pop_front();
            return val;
        }
        else{
            return -1;
        }
    }
    
    int popMiddle() {
        if( !ml.empty() ){
            list<int> :: iterator it = ml.begin();
            advance(it,ml.size()/2);
            if( ml.size()%2 == 0 ){
                advance(it,-1);
            }
            int val = *it;
            ml.erase(it);
            return val;
        }
        else{
            return -1;
        }
    }
    
    int popBack() {
        if( !ml.empty() ){
            int val = ml.back();
            ml.pop_back();
            return val;
        }
        else{
            return -1;
        }       
    }
};

*/