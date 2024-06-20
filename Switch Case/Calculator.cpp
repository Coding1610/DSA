#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //CALCULATOR:

    int a ;
    cout << " THE VALUE OF A IS " << endl;
    cin >> a;

    int b ;
    cout << " THE VALUE OF B IS " << endl;
    cin >> b;

    char op ;
    cout << " ENTER THE OPERATIONS " << endl;
    cin >> op;

    switch( op ){

        case '+' : cout << (a+b) << endl;
        break;

        case '-' : cout << (a-b) << endl;
        break;

        case '*' : cout << (a*b) << endl;
        break;

        case '/' : cout << (a/b) << endl;
        break;    

        case '%' : cout << (a%b) << endl;
        break;

        default : cout << " ENTER THE VALID OPERATION " << endl;
        
    }
    cout << endl;
}