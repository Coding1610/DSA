#include<iostream>
using namespace std;

int Divide_num( int N , int D ){

    if( N == D ){
        return 1;
    }

    bool Sign = true;

    if( N >= 0 && D < 0 ){
        Sign == false;
    }
    else if( N <= 0 && D > 0 ){
        Sign == false;
    }
    
    long Sum = 0;
    long Num = abs(N);
    long Dum = abs(D); 

    while( Num >= Dum ){
        int pow = 0;
        while( Num >= ( Dum << pow+1 )){
            pow += 1;
        }
        Sum += ( 1 << pow );
        Num -= ( Dum << pow ); 
    }

    if( Sum == ( 1 << 31 ) && Sign ){
        return INT32_MAX;
    }
    if( Sum == ( 1 << 31 ) && !Sign ){
        return INT32_MIN;
    }
    return Sign ? Sum : ((-1)*Sum);

}

int main(){
    
    int divisor;
    cout << "Enter your Divisor : ";
    cin >> divisor;

    int dividend;
    cout << "Enter your Dividend : ";
    cin >> dividend;

    int ans = Divide_num( divisor , dividend );
    cout << "Answer is : " << ans;
}

// T.C = ( LogN.LogN )