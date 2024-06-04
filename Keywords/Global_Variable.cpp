#include<bits/stdc++.h>
using namespace std;

int newnum = 1310;

void a(int &i){

    cout << " number is : " << i << endl;
    cout << " new number is : " << newnum << endl;
}

void b(int &i){

    // newnum++;  YOU  CAN CHANGE GLOBAL VARIBALE FROM ANY SCOPE , THATS WHY GV IS BP.
    
    cout << " number is : " << i << endl;
    cout << " new number is : " << newnum << endl;
}
    
 int main(){

    int i = 1610;
    cout << " number is : " << i << endl;
    cout << " new number is : " << newnum << endl;
    a(i);
    b(i);

}