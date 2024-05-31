#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue < int > maxi;
  
    maxi.push(0);
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);
    int size = maxi.size() ;
    cout << " SIZE IS : " << size << endl;
    for ( int i = 0 ; i < size ; i++){
        cout << maxi.top() << endl;
        maxi.pop();
    }
    cout << endl;

    cout << maxi.empty() << endl;

    priority_queue < int , vector<int> , greater<int>> mini;

    mini.push(0);
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    mini.push(5);
    int sizee = mini.size() ;
    cout << " SIZE IS : " << sizee << endl;
    for ( int i = 0 ; i < sizee ; i++){
        cout << mini.top() << endl;
        mini.pop();
    }
    cout << endl;

    cout << mini.empty() << endl;
}