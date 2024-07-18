#include<bits/stdc++.h>
using namespace std;

/*

queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;
    int i = 0;
    int j = q.size()-k;

    while( i != k ){
        st.push(q.front());
        q.pop();
        i++;
    }

    while( !st.empty() ){
        q.push(st.top());
        st.pop();
    }

    while( j != 0 ){
        q.push(q.front());
        q.pop();
        j--;
    }

    return q;

}


*/