#include<iostream>
using namespace std;

int OcttoDecimal(int n ){
    int decimal = 0;
    int j , x = 1;
    while(n>0){
        j = n%10;
        decimal += x*j;
        x =x*8;
        n = n/10;
    }
    return decimal;
}

int main(){

    int n;
    cin >> n;
    cout << "DECIMAL NO IS: " << OcttoDecimal(n);
}