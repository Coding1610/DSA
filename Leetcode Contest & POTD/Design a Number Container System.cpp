#include<bits/stdc++.h>
using namespace std;

/*

class NumberContainers {
public:
    map<int,int> mp;
    map<int,set<int>> setMp;

    NumberContainers() {}
    
    void change(int index, int number) {
        auto it = mp.find(index);
        if( it != mp.end() ){
            setMp[mp[index]].erase(index);
        }    
        mp[index] = number;
        setMp[number].insert(index);
    }
    
    int find(int number) {
        if( setMp[number].empty() ) return -1;
        return *setMp[number].begin();
    }
};


 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);

*/