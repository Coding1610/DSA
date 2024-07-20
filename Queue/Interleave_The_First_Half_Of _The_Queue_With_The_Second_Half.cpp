#include<bits/stdc++.h>
using namespace std;

/*

void interLeaveQueue(queue < int > & q) {
   
   stack<int> s1;
   stack<int> s2;
   stack<int> s3;

   int n = q.size();

    for( int i = 0 ; i < n/2 ; i++ ){
       s1.push(q.front());
       q.pop();
    }

    for( int i = 0 ; i < n/2 ; i++ ){
       s2.push(q.front());
       q.pop();
    }

    while( !s2.empty() ){
        s3.push(s2.top());
        s3.push(s1.top());
        s2.pop();
        s1.pop();
    }

    while( !s3.empty() ){
        q.push(s3.top());
        s3.pop();
    }

}

*/