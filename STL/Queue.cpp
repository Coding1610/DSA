#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue <string> q;

    q.push("YASHU");
    q.push("YASH");
    q.push("yashu");

    cout << q.front() << endl;
    cout << " BEFORE SIZE : " << q.size() << endl;

    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    
    cout << " AFTER SIZE : " << q.size() << endl;

    cout << q.empty() << endl;
}
