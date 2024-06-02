#include<bits/stdc++.h>
#include<string>
using namespace std;

long long int Reverse_Num( long long n ){

    // string str = "";
    int reminder = 0;
    bool sign = true;
    long long ans = 0;

    if( n < 0 ){
        sign = false;
    }
    
    long long num = abs(n);

    while( num > 0 ){
        reminder = num%10;
        // str += to_string(reminder);
        ans = ans*10 + reminder;
        num = num/10;
    }

    // long long reverse_num = stoi(str);

    if( ans == (1 << 31) && sign || ans == (1 << 31) && !sign ){
        return 0;
    }

    return ( sign ? ans : (-ans) );

}

int main(){

   long long int n;
   cout << "Enter your number : ";
   cin >> n;

   long long ans = Reverse_Num( n );
   cout << "Reverse of " << n << " is : " << ans;

}