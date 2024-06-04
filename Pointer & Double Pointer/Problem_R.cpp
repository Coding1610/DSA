#include <bits/stdc++.h>
using namespace std;

void changeSign( int *p ){
    *p = (*p)  *  -1;
}

int main(){

    int a = 10;
    changeSign(&a);
    cout << a << endl;

}

/* Output 

-10

*/