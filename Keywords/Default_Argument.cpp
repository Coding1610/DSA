#include<iostream>
using namespace std;

int summ( int a , int b , int c , int d = 1 ){
    int sum = a+b+c+d;
    return sum;
}

int main(){ 

    int a = 10;
    int b = 5;
    int c = 4;
    int d = 3;
    int ans = summ(a,b,c,d);
    cout << ans  ;
}

int print( int arr[] , int e , int s = 3 ){
    for(int i = s ; i < e ; i++){
         cout << arr[i] << " ";
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    print(arr , 5 , 0);
    
}