#include<bits/stdc++.h>
#include<string>
using namespace std;

bool Palindrome_Num( long long num ){

    int reminder = 0;
    long long ans = 0;

    if( num < 0 ){
        return false;
    }
    
    int n = abs(num);

    while( n > 0 ){
        reminder = n%10;
        ans = ans*10 + reminder;
        n = n/10;
    }

    return ( (ans == num) ? true : false );

}

bool Second_Ans( int n ){

    string str = to_string(n);
    int left = 0;
    int right = str.size()-1;

    while( left < right ){
        if( str[left] != str[right] ){
            return false; 
        }
        left++;
        right--;
    }
    return true;
   
}

int main(){

    long long int n;
    cout << "Enter your number : ";
    cin >> n;

    cout << n << " is Palindrome : " << Palindrome_Num( n );

}