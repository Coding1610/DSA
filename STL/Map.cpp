#include<iostream>
#include<map>
using namespace std;
int main(){

    map < int , string > m;
    m.insert({1,"YASHU"});
    m.insert({2,"yashu"});
    m.insert({3,"YASH"});
    m.insert({4,"yash"});
    m[5] = " MAITRU ";

    for (auto i : m){
        cout << i.first << endl;
    }
    cout << endl;
    for (auto i : m){
        cout << i.second << endl;
    }
    cout << endl;
    for (auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << m.count(4) << endl;
    cout << m.count(40) << endl;
    cout << endl;

    m.erase(2);
    for (auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(4);
    for (auto i = it ; i!=m.end() ; i++){
        cout << (*i).first << endl;
    }
    cout << endl;
    for (auto i = it ; i!=m.end() ; i++){
        cout << (*i).first << " " << (*i).second << endl;
    }
}