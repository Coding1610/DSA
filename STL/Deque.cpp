#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque <int> d ;
    
    d.push_front(1);
    d.push_back(10);
    int size = d.size();
    for ( int i = 0 ; i < size ; i ++){
        cout << d[i] << endl;
    }

    cout << d.at(1) << endl;
    cout << d.at(0) << endl;

    cout << d.front() << endl;
    cout << d.back() << endl;

    cout << " SIZE IS : " << d.size() << endl;
    cout << d.empty() << endl;
    
        d.pop_front();
    int sizee = d.size();
    for ( int i = 0 ; i < sizee ; i ++){
        cout << d[i] << endl;
    }
    cout << endl;

    cout << " SIZE AFTER : " << d.size() << endl;
    cout << d.empty() << endl;
    
    d.erase(d.begin());

    int si = d.size();
    for ( int i = 0 ; i < si ; i ++){
        cout << d[i] << endl;
    }
}