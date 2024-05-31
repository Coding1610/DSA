#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack <string> s ;
    
    s.push("YASHU");
    s.push("YASH");
    s.push("yashu");

    cout << s.top() << endl;
    cout << " BEFORE SIZE : " << s.size() << endl;

    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    
    cout << " AFTER SIZE : " << s.size() << endl;

    cout << s.empty() << endl;
}