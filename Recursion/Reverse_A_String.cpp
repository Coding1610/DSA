#include<bits/stdc++.h>
using namespace std;

void Reverse( string& str , int i , int j ){

    // Base Case
    if( i == j || i > j ){
        return;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    // Recursion Call28
    return Reverse( str , i , j );
}

int main(){

    string str;
    cout << "Enter Your String : ";
    cin >> str;

    cout << "Normal String : " << str << endl;
    Reverse( str , 0 , str.length()-1 );
    cout << "Reversed String : " << str << endl;
}