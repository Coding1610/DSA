#include<bits/stdc++.h>
using namespace std;

/*

int findMinimumCost(string str) {

    if( str.length()%2 == 1 ){
        return -1;
    }
    
    stack<char> s;

    for( int i = 0 ; i < str.length() ; i++ ){

        char ch = str[i];
        
        if( ch == '{' ){ 
            s.push(ch);
        }

		else{
            if( !s.empty() && s.top() == '{' ){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }

    }
    
    int a = 0;
    int b = 0;

    while( !s.empty() ){
        
        if( s.top() == '{' ){
            b++;
        }
        else{
            a++;
        }
        s.pop();

    }
	return ((a+1)/2)+((b+1)/2);
}

*/