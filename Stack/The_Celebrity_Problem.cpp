#include<bits/stdc++.h>
using namespace std;

/* LeetCode
 
class Solution {
    
    private:
    bool knows( vector<vector<int> >& M , int a , int b , int n ){

        if(M[a][b] == 1){
            return true;
        }
        else{
            return false;
        }

    }
    
    public:
    int celebrity( vector<vector<int>>& M , int n ){
               
        stack<int> s;
        for( int i = 0 ; i < n ; i++ ){
            s.push(i);
        }   
        
        while( s.size() > 1 ){
            
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if( knows( M , a , b , n ) ){
                s.push(b);
            }
            else{
                s.push(a);
            }

        }

        int ans = s.top();
      
        int zeroCount = 0;

        for( int i = 0 ; i < n ; i++ ){
            if( M[ans][i] == 0 ){
                zeroCount++;
            }
        }

        if( zeroCount != n ){
            return -1;
        }
        
        int oneCount = 0;
        for( int i = 0 ; i < n ; i++ ){
            if (M[i][ans] == 1 ){
                oneCount++;
            }
        } 

        if( oneCount != n-1 ){
            return -1;
        }
        
        return ans;

    }
};

*/

/* Coding Ninjas

[
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
]

int findCelebrity(int n){

 	stack<int> st;

	for( int i = 0 ; i < n ; i++ ){
		st.push(i);
	}

	int a = st.top();
	st.pop();

	while( !st.empty() ){
		int b = st.top();
		st.pop();
		if( knows(a,b) ){
			a = b;
		}
	}

	for( int i = 0 ; i < n ; i++ ){
		if( i != a ){
			if( knows(a,i) || !knows(i,a) ){
				return -1;
			}
		}
	}
	 
	return a;
}

*/