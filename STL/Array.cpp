#include<iostream>
#include<array>
using namespace std;
int main(){

    array <int , 10> a = {1,2,3,4,5,55,44,33,22,11};
     int size = a.size();
    cout << " SIZE OF AN ARRAY IS : " << size << endl;
    cout << a.at(3) << endl;
    cout << a.at(7) << endl;
    cout << a.at(9) << endl;
    cout << a.at(0) << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.empty() << endl;

}