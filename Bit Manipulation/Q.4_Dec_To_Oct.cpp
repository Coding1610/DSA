#include<iostream>
using namespace std;

int DecimaltoOctal(int n){
    int octal = 0;
    int x = 1;
    int reminder;
    while(n!=0){
        reminder = n%8;
        octal = (octal + (x * reminder));
        x = x*10;
        n = n/8;
    }
    return octal;
}

int main(){

    int n ;
    cin >> n;
    cout << " OCTAL NUMBER IS : " << DecimaltoOctal(n) << endl;
}

