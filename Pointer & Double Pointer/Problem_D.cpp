#include <bits/stdc++.h>
using namespace std;

int main(){

    // Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes), what will be the output -

    int a = 7;
    int *c = &a;
    c = c + 3;
    cout<< c << endl;  

}

/* Output 

412

*/