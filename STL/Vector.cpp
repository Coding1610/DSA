#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector <int> v ;

    vector <int> v1(10,16);
    int size = v1.size();
    for ( int i = 0 ; i < size ; i++){
        cout << v1[i] << endl;
    }
    cout << endl;

    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    v.push_back(500);

    int sizee = v.size();
    cout << " BEFORE SIZE : " << sizee << endl;

    cout << v.capacity() << endl;

    cout << v.at(0) << endl;
    cout << v.at(1) << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    v.pop_back();
    int s = v.size();
    cout << " AFTER SIZE : " << s << endl;

    v.clear();
    
    cout << " AFTER CAPACITY : " << v.capacity() << endl;
    cout << " SIZE AFTER CLEAN : " << v.size() << endl;
    cout << v.empty() << endl;

    vector <int> vector(v1);
    int s1 = v1.size();
    for (int i = 0 ; i < s1 ; i++){
        cout << vector[i] << endl;

    }
}