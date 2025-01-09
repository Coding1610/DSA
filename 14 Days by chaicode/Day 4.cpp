#include<bits/stdc++.h>
using namespace std;

// you just need to implement the BrowserHistory class below
class BrowserHistory {
private:
    stack<string> history;
    stack<string> backStack;
public:
    BrowserHistory(string homepage) {
       // your code here
    }

    void visit(string url) {
        history.push(url);
    }

    string back(int steps) {
        // your code here
        if(history.empty()) return "";
        
        while( steps != 0 ){
            backStack.push(history.top());
            history.pop();
            steps--;
        }

        if( !history.empty() ){
            return history.top();
        }

        return "";
    }

    string forward(int steps) {
        // your code here
        if(backStack.empty()) return "";

        while( steps != 0 ){
            history.push(backStack.top());
            backStack.pop();
            steps--;
        } 

        if( !history.empty() ){
            return history.top();
        }

        return "";
        
    }
};

int main() {
    int n;
    cin >> n; 
    string operation, url;
    int steps;

    // please do not change below code
    BrowserHistory browserHistory("chaicode.com");
    
    string result = "chaicode.com ";
    for (int i = 0; i < n; i++) {
        cin >> operation;

        if (operation == "visit") {
            cin >> url;
            browserHistory.visit(url);
            result += url + " ";
        } else if (operation == "back") {
            cin >> steps;
            result += browserHistory.back(steps) + " ";
        } else if (operation == "forward") {
            cin >> steps;
            result += browserHistory.forward(steps) + " ";
        }
    }
    
    cout << result.substr(0, result.size() - 1);

    return 0;
}