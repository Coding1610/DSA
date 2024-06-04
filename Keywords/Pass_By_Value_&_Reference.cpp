#include<bits/stdc++.h>
using namespace std;

void Pass_By_Value(int n){

    n++;

}

void Pass_By_Reference(int &n){
    
    n++;

}

int main(){

    int n = 16;
    cout << n << endl;
    Pass_By_Value(n);
    cout << n << endl;
    cout << endl;
    Pass_By_Reference(n);
    cout << n << endl;
    cout << endl;
} 

/*

//10
void update(int n){
    n = 10;
}

int main(){
    int a = 10;
    update(a);
    cout << a << endl;
}


//15
int update(int n){
    n -= 5;
    return n;
}

int main(){
    int a = 15;
    update(a);
    cout << a << endl;
}


//196
int update(int a){
    int ans = a*a;
    return ans;
}

int main(){
    int a = 14;
    a = update(a);
    cout << a << endl;
}

*/