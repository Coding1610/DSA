#include <bits/stdc++.h>
using namespace std;

int main(){

    int ***r, **q, *p, i=8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout<<*p << " " <<**q << " "<<***r;

}

/* Output 

10 10 10

*/