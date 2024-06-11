#include<bits/stdc++.h>
using namespace std;

bool Palindrome( string str , int i , int j ){

    // Base Case
    if( i >= j ){
        return true;
    }

    if( str[i] != str[j] ){
        return false;
    }

    i++;
    j--;

    return Palindrome( str , i , j);

}

int main(){

    string str;
    cout << "Enter Your String : ";
    cin >> str;

    cout << "Answer is : " << Palindrome(str , 0 , str.length()-1);
}