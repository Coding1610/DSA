#include<iostream>
#include<list>
using namespace std;
int main() {
    list <int> l;
    list<int> l1;

    l1.push_front(9);
    l1.push_back(10);

    l.push_front(99);
    l.push_back(100);

    int size = l.size();
    for ( int i : l){
        cout << i << endl;
    }

    cout << " SIZE OF LIST IS : " << size << endl;

    l.pop_front();
   
    int s = l.size();
    for ( int i : l){
        cout << i << endl;
    }

    cout << " SIZE OF LIST IS : " << s << endl;
    
    list <int> l2(l1);
    for ( int i : l2){
        cout << i << endl;
    }

    cout << l.empty() << endl;
    cout << l1.empty() << endl;
    cout << l2.empty() << endl;
    
    l1.erase(l1.begin());
    for(int i : l1){
        cout  << i << endl;
    }

}
