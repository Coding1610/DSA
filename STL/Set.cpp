#include<iostream>
#include<set>
using namespace std;
int main(){

    set <int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    for ( int i : s){
        cout << i << endl;
    }
    cout << endl;
    cout << s.count(10) << endl;
    cout << s.count(100) << endl;
    cout << s.count(30) << endl;
    cout << s.count(300) << endl;
    cout << s.count(50) << endl;
    cout << endl;
    
    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);
    for ( int i : s){
        cout << i << endl;
    }
    cout << endl;

    set<int> :: iterator itr = s.find(30);
    for ( auto i = itr ; i!=s.end() ; i++){
        cout << *i << endl;
    }
    cout << endl;

}