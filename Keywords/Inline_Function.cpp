#include<bits/stdc++.h>
using namespace std;

// IN INLINE FUNCTION WHEN WE CALL THE FUNCTION, ANS IS REPLACE BY THE FUNCTION BODY AND USE LESS MEMORY .

inline int GETMAX(int a , int b){
     
    return (a>b) ? a : b;

}

int main(){

    int a = 16;
    int b = 13;
    int ans = 0;

    ans = GETMAX(a,b);
    cout << ans << endl;

    a = a - 4;
    b = b + 1;

    ans = GETMAX(a,b);
    cout << ans << endl;
}