#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector <int> v;  

    v.push_back(1);
    v.push_back(10);
    v.push_back(7);
    v.push_back(3);

    int size = v.size();
    cout << size << endl;

    for ( int i = 0 ; i < size ; i++){
        cout << v[i] << " " ;
    }
    cout << endl;

    cout << " BINARY SEARCH : " << binary_search(v.begin(), v.end(),10) <<endl;
    cout << endl;

    int a = 16;
    int b = 13;
    swap(a,b);
    cout << a << " AND " << b << endl;
    cout << endl;

    string y = "ABCDE";
    reverse(y.begin() , y.end());
    cout << y <<endl;
    cout << endl;

    sort(v.begin() , v.end());
    for ( int i : v){
        cout << i << endl;
    }
    cout << endl;

    rotate(v.begin() ,v.begin()+3, v.end());
    for (int i : v){
        cout << i << endl;
    }
    cout << endl;
    
}