#include <bits/stdc++.h>
using namespace std;

int main(){

    int a = 7;
    int *c = &a;
    c = c + 1;
    cout  << a << "  " << *c << endl;
  
}

/* Output 

7 Garbage_Value

*/